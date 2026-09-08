class Solution {
public:
    int countCommas(int n) {
        if(n<=999) return 0;
        else if(n<=99999) return (n-999)*1;
        return 99001;
    }
};