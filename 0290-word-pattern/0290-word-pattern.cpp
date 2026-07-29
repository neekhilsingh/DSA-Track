class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> mp;
        unordered_map<string,char> rev;
        int j=0;
        for(int i=0;i<pattern.length();i++){
            string curr="";
            while(j<s.length()){
                if(s[j]==' ') break;
                curr+=s[j];
                j++;
            }
            j++;
            if(curr=="") return false;
            if(mp.find(pattern[i])!=mp.end()){
                if(mp[pattern[i]]!=curr) return false;
            }
            else {
                if(rev.find(curr)!= rev.end()) return false;
                mp[pattern[i]]=curr;
                rev[curr]=pattern[i];
            }
        }
        if(j< s.length()) return false;
        return true;
    }
};