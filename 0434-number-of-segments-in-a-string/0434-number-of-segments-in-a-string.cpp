class Solution {
public:
    int countSegments(string s) {
        int n=s.length();
        if(n==0) return 0;
        int i=0;
        while(i<n && s[i]==' '){
            i++;
        }
        if(i==n) return 0;
        int ans=0;
        for(int j=i;j<n-1;j++){
            if(s[j]==' ' && s[j+1]!=' ') ans++;
        }
        return ans+1;
    }
};