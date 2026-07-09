class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return {};
        vector<vector<int>> v;
        int i=0;
        vector<int> v1;

        while(i<n){
            if(i==0) v1.push_back(nums[i]);
            else if(abs(1LL*nums[i]-nums[i-1])==1) v1.push_back(nums[i]);
            else{
                v.push_back(v1);
                v1.clear();
                v1.push_back(nums[i]);
            }
            i++;
        }
        v.push_back(v1);

        vector<string> ans;
        for(auto elt:v){
            int sze=elt.size();
            if(sze==1) ans.push_back(to_string(elt[0]));
            else{
                int first=elt[0];
                int last=elt[sze-1];
                string st="";
                st+=to_string(elt.front());
                st+= "->";
                st+=to_string(elt.back());
                ans.push_back(st);
            }
        }

        return ans;
    }
};