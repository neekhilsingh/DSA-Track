class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> sorted=arr;
        sort(sorted.begin(),sorted.end());
        map<int,int> mp;
        int rank=1;
        for(int i=0;i<arr.size();i++){
            int elt=sorted[i];
            if(mp.find(elt)!=mp.end()) continue;
            else mp.insert({sorted[i],rank++});
        }

        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            ans.push_back(mp[arr[i]]);
        }
        return ans;
    }
};