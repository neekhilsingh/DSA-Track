class Solution {
public:
    int hammingDistance(int x, int y) {
        string s1=bitset<32>(x).to_string();
        string s2=bitset<32>(y).to_string();
        int ans=0;
        for(int i=0;i<32;i++){
            if(s1[i]!=s2[i]) ans++;
        }
        return ans;
    }
};