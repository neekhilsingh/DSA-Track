class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        vector<string> v;
        string word="";
        for(auto elt:s){
            if(elt!=' '){
                word+=elt;
            }
            else{
                if(word!=""){
                    v.push_back(word);
                    word="";
                }
                
            }
        }
        if(word!= "") v.push_back(word);
        if(v.empty()) return "";
        string ans="";
        for(int i=v.size();i>0;i--){
            ans+=v[i-1];
            if(i>1) ans+=' ';
        }
        return ans;
    }
};