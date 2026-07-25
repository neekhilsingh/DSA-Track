class Solution {
public:
    int maxProduct(int n) {
        vector<int> digit;
        int sze=0;
        while(n>0){
            digit.push_back(n%10);
            n=n/10;
            sze++;
        }
        sort(digit.begin(),digit.end());
        return digit[sze-1]*digit[sze-2];
    }
};