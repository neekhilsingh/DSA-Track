class Solution {
public:
    int minBitFlips(int start, int goal) {
        string s1=bitset<32>(start).to_string();
        string s2=bitset<32>(goal).to_string();
        int ans=0;
        for(int i=0;i<32;i++){
            if(s1[i]!=s2[i]) ans++;
        }
        return ans;
    }
};