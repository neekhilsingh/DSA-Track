class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        int n=nums.size();
        long long ans=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                long long gcdd=gcd(nums[i], nums[j]);
                long long solve=((long long)nums[i]*(long long)nums[j])/(gcdd*gcdd);
                ans=max(ans,solve);
            }
        }
        return ans;
    }
};