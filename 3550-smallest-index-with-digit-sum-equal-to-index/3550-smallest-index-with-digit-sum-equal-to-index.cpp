class Solution {
public:
    bool func(int num,int i){
        int sum=0;
        while(num>0){
            sum+=num%10;
            num=num/10;
        }
        return i==sum;
    }
    int smallestIndex(vector<int>& nums) {
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(func(nums[i],i)) return i;
        }
        return -1;
    }
};