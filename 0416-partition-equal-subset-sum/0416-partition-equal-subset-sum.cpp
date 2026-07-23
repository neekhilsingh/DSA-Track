class Solution {
public:
    bool helper(vector<int> &nums,int total,int currsum,int idx,vector<vector<int>> &dp){
        if(currsum == total/2) return true;
        if(idx<0 || currsum>total/2) return false;
        if(dp[idx][currsum]!=-1) return dp[idx][currsum];
        int keep=helper(nums,total,currsum+nums[idx],idx-1,dp);
        int skip=helper(nums,total,currsum,idx-1,dp);
        return dp[idx][currsum]= keep || skip;
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        for(auto elt:nums) total+=elt;
        if(total%2==1) return false;
        vector<vector<int>> dp(n,vector<int> (total/2+1,-1));  
        return helper(nums,total,0,n-1,dp);   //nums,total,currsum,idx
    }
};