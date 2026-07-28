class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> v(26,0);
        for(int i=0;i<s.length();i++){
            v[s[i]-'a']++;
        }
        string even="";
        string odd="";
        for(int i=0;i<26;i++){
            if(v[i]%2==0) {
                even+=string(v[i]/2,i+'a');
            }
            else {
                even+=string(v[i]/2,i+'a');
                odd+=char(i+'a');
            }
        }

        string ans="";
        ans+=even;
        ans+=odd;

        reverse(even.begin(),even.end());
        ans+=even;
        return ans;
    }
};