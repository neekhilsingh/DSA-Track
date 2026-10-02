class Solution {
public:
    void partentheses(string s,int n,int open,int close,vector<string> &ans){
        if(open==n && close==n) {
            ans.push_back(s);
            return;
        }
        if(open<n) partentheses(s+'(',n,open+1,close,ans);
        if(close<open) partentheses(s+')',n,open,close+1,ans);
    }
    vector<string> generateParenthesis(int n) {
        int open=0,close=0;
        vector<string> ans;
        partentheses("",n,open,close,ans);
        return ans;
    }
};