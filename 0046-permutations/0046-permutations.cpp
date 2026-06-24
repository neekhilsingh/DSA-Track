// Method 1

// class Solution {
// public:
//     void perm(vector<int> &nums,vector<int> &curr,vector<bool> &flag,vector<vector<int>> &ans){
//         if(nums.size()==curr.size()){
//             ans.push_back(curr);
//             return;
//         }
//         for(int i=0;i<nums.size();i++){
//             if(flag[i]==false){
//                 flag[i]=true;
//                 curr.push_back(nums[i]);
//                 perm(nums,curr,flag,ans);
//                 flag[i]=false;
//                 curr.pop_back();
//             }
//         }

//     }
//     vector<vector<int>> permute(vector<int>& nums) {
//         int n=nums.size();
//         vector<vector<int>> ans;
//         vector<bool> flag(n,false);
//         vector<int> curr;
//         perm(nums,curr,flag,ans);
//         return ans;
//     }
// };

// Method 2

class Solution {
public:
    void perm(vector<int> &nums,int idx,vector<vector<int>> &ans){
        if(idx==nums.size()-1){
            ans.push_back(nums);
            return;
        }
        for(int i=idx;i<nums.size();i++){
            swap(nums[i],nums[idx]);
            perm(nums,idx+1,ans);
            swap(nums[i],nums[idx]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        perm(nums,0,ans);
        return ans;
    }
};