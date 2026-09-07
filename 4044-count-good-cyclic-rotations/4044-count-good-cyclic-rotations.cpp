class Solution {
public:
    // void cyclic_rot(vector<int> &nums){
    //     int first=nums[0];
    //     for(int i=1;i<nums.size();i++){
    //         nums[i-1]=nums[i];
    //     }
    //     nums[nums.size()-1]=first;
    //     return;
    // }
    int countGoodRotations(vector<int>& nums) {
        int n=nums.size();
        long long first_half=0;
        long long second_half=0;
        for(int i=0;i<n/2;i++){
            first_half+=nums[i];
        }
        for(int i=n/2;i<n;i++){            
            second_half+=nums[i];
        }
        int ans=0;
        if(first_half>second_half) ans++;     
        for(int i=0;i<n-1;i++){           //previous 1 to n but got tle
            int first=nums[i];          //previous nums[0]
            int mid=nums[(i+n/2)%n];    //previous nums[n/2]
            // cyclic_rot(nums);
            first_half-=first;
            first_half+=mid;
            second_half+=first;
            second_half-=mid;
            if(first_half>second_half) ans++;
        }
        return ans;
    }
};