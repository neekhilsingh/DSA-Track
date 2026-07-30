class Solution {
public:
    int minimumPushes(string word) {
        int n=word.length();
        int ans=0;
        int curr=1;
        while(n>0){
            if(n>8) {
                ans+=curr*8;
                curr++;
                n-=8;
            }
            else{
                ans+=curr*n;
                curr++;
                n=0;
            }
        }
        return ans;
    }
};