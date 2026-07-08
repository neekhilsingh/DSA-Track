class Solution {
public:
    //           nw   north  ne
    //          west         east
    //           sw   south  se
    bool life(vector<vector<int>>& board ,int i,int j){
        //1 live 0 die
        int row=board.size();                          
        int col=board[0].size();
        int adj=0;
        //checking point
        if(i>0){
            //north
            adj+=board[i-1][j];
            //nw
            if(j>0) adj+=board[i-1][j-1];
            //ne
            if(j<col-1) adj+=board[i-1][j+1];
        }
        if(i<row-1){
            //south
            adj+=board[i+1][j];
            //sw
            if(j>0) adj+=board[i+1][j-1];
            //se
            if(j<col-1) adj+=board[i+1][j+1];
        }
        if(j>0){
            //west
            adj+=board[i][j-1];
        }
        if(j<col-1){
            //east
            adj+=board[i][j+1];
        }

        //deciding live or die
        if(board[i][j]==1 && adj<2) return false;
        else if(board[i][j]==1 && (adj==2 || adj==3)) return true;
        else if(board[i][j]==1 && adj>3) return false;
        else if(board[i][j]==0 && adj==3) return true;
        return false;
    }
    void gameOfLife(vector<vector<int>>& board) {
        int row=board.size();                          
        int col=board[0].size();
        vector<vector<int>> temp =board;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(life(board,i,j)) temp[i][j]=1;
                else temp[i][j]=0;
            }
        }
        board=temp;
        return;
    }
};