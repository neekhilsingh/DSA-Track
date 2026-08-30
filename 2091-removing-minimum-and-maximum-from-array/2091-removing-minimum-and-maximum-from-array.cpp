class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mn=*min_element(nums.begin(),nums.end());
        int mx=*max_element(nums.begin(),nums.end());
        int idx1=-1;
        int idx2=-1;
        for(int i=0;i<nums.size();i++){
            if(mn==nums[i]) idx1=i;
            if(mx==nums[i]) idx2=i;
            if(idx1!=-1 && idx2!=-1) break;
        }
        int n=nums.size();
        int ans1=max(idx1+1,idx2+1);
        int ans2=max(n-idx1,n-idx2);
        int ans3=0;
        if(idx1<idx2){
            ans3=min(idx1+1+n-idx2,idx2+1+n-idx1);
        }
        else{
            ans3= min(idx2+1+n-idx1,idx1+1+n-idx2);
        }
        return min({ans1,ans2,ans3});
    }
};