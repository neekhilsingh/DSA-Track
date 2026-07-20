class Solution {
public:
    void update(vector<vector<int>> &grid){
        int row=grid.size();
        int col=grid[0].size();
        vector<int> last;
        for(int i=0;i<row;i++){
            last.push_back(grid[i][col-1]);
        }
        //op1
        for(int i=0;i<row;i++){
            for(int j=col-1;j>0;j--) grid[i][j]=grid[i][j-1];
        }
        //op2
        for(int i=0;i<row;i++){
            if(i==0) grid[i][0]=last[row-1];
            else grid[i][0]=last[i-1];
        }
    }
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        while(k--){
            update(grid);
        }
        return grid;
    }
};