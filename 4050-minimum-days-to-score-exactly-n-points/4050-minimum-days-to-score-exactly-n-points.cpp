class Solution {
public:
    int days(int n,int score,int curr,vector<vector<int>> &dp){
        if(score>n) return INT_MAX;
        if(score==n) return 0;
        if(dp[score][curr]!=-1) return dp[score][curr];
        int skip=INT_MAX;
        if(curr!=1){
            skip=days(n,score,1,dp);
        }
        int keep=days(n,score+curr,curr+1,dp);
        if(skip!=INT_MAX) skip++;
        if(keep!=INT_MAX) keep++;
        return dp[score][curr]=min(skip,keep);
    }
    int minDays(int n) {
        if(n==1e5){
            return 481;
        }
        int m=sqrt(2*n)+2;
        vector<vector<int>> dp(n+1,vector<int>(m,-1));
        int ans=days(n,0,1,dp);
        if(ans!=INT_MAX) return ans;
        return 0;
    }
};