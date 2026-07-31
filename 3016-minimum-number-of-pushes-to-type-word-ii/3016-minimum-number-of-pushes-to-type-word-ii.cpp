class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int> mp;
        for(auto ch:word) mp[ch]++;
        vector<int> freq;
        for(auto elt:mp) {
            freq.push_back(elt.second);
        }
        sort(freq.rbegin(),freq.rend());
        int ans=0;
        int curr=1;
        int dist=0;
        for(auto times:freq){
            dist++;
            ans+=curr*times;
            if(dist%8==0)
                curr++;
        }
        return ans;
    }
};