class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        int mx=nums[0];
        vector<int> Gcd;
        for(int i=0;i<n;i++){
            mx=max(nums[i],mx);
            Gcd.push_back(__gcd(nums[i],mx));
        }
        sort(Gcd.begin(),Gcd.end());
        long long sum=0;
        for(int i=0;i<n/2;i++){
            sum+=__gcd(Gcd[i],Gcd[n-i-1]);
        }
        return sum;
    }
};