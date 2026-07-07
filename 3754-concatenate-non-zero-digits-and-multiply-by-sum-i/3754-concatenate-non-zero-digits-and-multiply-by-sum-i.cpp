class Solution {
public:
    long long sumAndMultiply(int n) {
        string s=to_string(n);
        long long x=0;
        long long sum=0;
        for(int i=0;i<s.length();i++){
            if(s[i]!='0'){
                x*=10;
                x+=s[i]-'0';
                sum+=s[i]-'0';
            }
        }
        long long ans=x*sum;
        return ans;
    }
};