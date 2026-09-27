class Solution {
public:
    string reverseParentheses(string s) {
        int n=s.length();
        stack<char> st1;
        stack<char> st2;
        stack<char> st3;
        int i=0;
        while(i<n){
            if(s[i]==')'){
                while(st1.size()>0 && st1.top()!='('){
                st2.push(st1.top());
                st1.pop();
                }
                st1.pop();
                while(st2.size()>0){
                    st3.push(st2.top());
                    st2.pop();
                }
                while(st3.size()>0){
                    st1.push(st3.top());
                    st3.pop();
                }
            }
            else{
                st1.push(s[i]);
            }
            i++;
        }
        string ans="";
        while(st1.size()>0){
            ans+=st1.top();
            st1.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};