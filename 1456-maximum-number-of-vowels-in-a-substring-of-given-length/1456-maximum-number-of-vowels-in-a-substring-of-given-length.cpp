class Solution {
public:
    bool vowel(char ch){
        return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
    }
    int maxVowels(string s, int k) {
        int n=s.length();
        int i=0;
        int j=0;
        int ans=0;
        int count=0;
        while(j<n){
            if(vowel(s[j])){
                count++;
            }
            while(j-i+1>k){
                if(vowel(s[i])) count--;
                i++;
            }
            ans=max(count,ans);
            j++;
        }
        return ans;
    }
};