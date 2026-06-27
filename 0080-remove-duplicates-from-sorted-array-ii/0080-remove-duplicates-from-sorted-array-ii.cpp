class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto elt:nums) mp[elt]++;

        for(int i=0;i<nums.size();i++){
            while(mp[nums[i]]>2 ){
                nums.erase(nums.begin()+i);
                mp[nums[i]]--;
            }
        }
        return nums.size();
    }
};