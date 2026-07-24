class Solution {
public:
    int helper(vector<int>& nums, int target,int curr,int i,vector<vector<int>> &dp,int total){
        if(i<0 && curr==target) return 1;
        if(i<0 && curr!=target) return 0;
        if(dp[i][curr+total]!=-1) return dp[i][curr+total];
        int add=helper(nums,target,curr+nums[i],i-1,dp,total);
        int sub=helper(nums,target,curr-nums[i],i-1,dp,total);
        return dp[i][curr+total]= (add+sub); 
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size(); 
        //here idx and curr is changing so our dp will be 2d dp

        //-total to +total
        int total=0;
        for(auto elt:nums) total+=elt;
        vector<vector<int>> dp(n,vector<int>(2*total+1,-1));
        int ans=helper(nums,target,0,n-1,dp,total);   //nums,target,steps,curr,idx
        return ans;
    }
};