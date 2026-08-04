class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int mn=nums.front();
        int mx=nums.back();
        int i=0;

        while(mn<=mx) {
            if(i<nums.size() && nums[i]==mn) {
                while(i+1<nums.size() && nums[i]==nums[i+1]) i++;           
                i++;
            }
            else{
                ans.push_back(mn);
            }
            mn++;
        }
        return ans;
    }
};