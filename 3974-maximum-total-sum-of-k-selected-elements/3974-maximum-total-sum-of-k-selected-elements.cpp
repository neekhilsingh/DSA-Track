class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        long long ans=0;
        sort(nums.begin(),nums.end());
        int i=nums.size()-1;
        while(k--){
            long long res=(long long)mul*nums[i] ;
            ans+=max((long long)nums[i],res);
            i--;
            mul--;
        }
        return ans;
    }
};