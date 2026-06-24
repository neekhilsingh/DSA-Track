class Solution {
public:
    void perm(vector<int> &nums,vector<int> &curr,vector<bool> &flag,vector<vector<int>> &ans){
        if(nums.size()==curr.size()){
            ans.push_back(curr);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(flag[i]==false){
                flag[i]=true;
                curr.push_back(nums[i]);
                perm(nums,curr,flag,ans);
                flag[i]=false;
                curr.pop_back();
            }
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        vector<bool> flag(n,false);
        vector<int> curr;
        perm(nums,curr,flag,ans);
        return ans;
    }
};