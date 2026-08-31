class Solution {
public:
    int numRabbits(vector<int>& answers) {
        int n=answers.size();
        int count=0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++) {
            if(!mp[answers[i]+1]){
                count+=answers[i]+1;
                if(answers[i]==0) continue;
                mp[answers[i]+1]=1;
            }
            else{
                mp[answers[i]+1]++;
                int key=answers[i]+1;
                int val=mp[key];
                if(key==val) mp.erase(key);
            }
        }
        return count;
    }
};