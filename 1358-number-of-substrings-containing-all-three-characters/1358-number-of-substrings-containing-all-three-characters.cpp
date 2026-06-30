class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.length();
        // a b c
        vector<int> abc(3,0);
        int i=0;
        int j=0;
        int count=0;
        while(j<n){
            if(s[j]=='a') abc[0]++;
            if(s[j]=='b') abc[1]++;
            if(s[j]=='c') abc[2]++;

            while(abc[0]>0 && abc[1]>0 && abc[2]>0){
                if(s[i]=='a') abc[0]--;
                else if(s[i]=='b') abc[1]--;
                else if(s[i]=='c') abc[2]--;
                count+=1+(n-j-1);
                i++;
            }
            j++;
        }
        return count;
    }
};