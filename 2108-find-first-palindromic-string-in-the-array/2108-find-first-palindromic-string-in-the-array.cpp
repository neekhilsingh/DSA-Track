class Solution {
public:
    bool pal(string st){
        int n=st.length();
        int i=0,j=n-1;
        while(i<j){
            if(st[i]!=st[j]) return false;
            i++;j--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        for(auto elt:words){
            if(pal(elt)) return elt;
        }
        return "";
    }
};