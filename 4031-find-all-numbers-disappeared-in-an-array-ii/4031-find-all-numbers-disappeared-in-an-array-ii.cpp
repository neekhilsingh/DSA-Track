class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        if(nums.empty()){
            ans.push_back({lower,upper});
            return ans;
        }
        if(lower<nums[0]) ans.push_back({lower,min(upper,nums[0]-1)});
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]>1 ) {
                if(nums[i-1]>=lower && nums[i]<=upper) ans.push_back({nums[i-1]+1,nums[i]-1});
                else if(nums[i-1]<lower && nums[i]<=upper && nums[i]>lower) ans.push_back({lower,nums[i]-1});
                else if(nums[i-1]>=lower && nums[i]>upper && nums[i-1]<upper) ans.push_back({nums[i-1]+1, upper});
                else if(nums[i-1]<lower && nums[i]>upper) ans.push_back({lower,upper});
            }
        }
        if(upper>nums[nums.size()-1]) ans.push_back({max(lower,nums[nums.size()-1]+1),upper});
        return ans;
    }
};