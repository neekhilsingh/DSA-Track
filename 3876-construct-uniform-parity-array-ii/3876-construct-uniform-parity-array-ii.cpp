class Solution {
public:
    bool parity(vector<int> &nums1){
        int odd=0;
        int even=0;
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]%2==1) odd++;
            else even++;
            if(odd>0 && even>0)  return false;
        }
        return true;
    }
    bool uniformArray(vector<int>& nums1) {
        if(parity(nums1)) return true;
        int mn=*min_element(nums1.begin(),nums1.end());
        if(mn%2==0) return false;
        return true; 
    }
};