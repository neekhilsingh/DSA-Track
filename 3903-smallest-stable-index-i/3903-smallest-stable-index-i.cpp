class Solution {
public:
    int mn(vector<int>& nums,int idx){
        int mnn=INT_MAX;
        for(int i=idx;i<nums.size();i++) mnn=min(mnn,nums[i]);
        return mnn;
    }
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int currmx=-1;
        for(int i=0;i<n;i++){
            currmx=max(currmx,nums[i]);
            int minn=mn(nums,i);
            if(currmx-minn<=k) return i;
        }
        return -1;
    }
};