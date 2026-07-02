class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(auto elt:nums) mp[elt]++;

        vector<int> ans;
        for(auto elt:mp){
            if(elt.second>n/3) ans.push_back(elt.first);
        }
        return ans;
    }
};