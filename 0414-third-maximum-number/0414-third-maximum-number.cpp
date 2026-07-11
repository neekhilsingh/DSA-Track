class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> st(nums.begin(),nums.end());
        nums=vector<int>(st.begin(),st.end());
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n<3) return nums[n-1];
        return nums[n-3];
    }
};