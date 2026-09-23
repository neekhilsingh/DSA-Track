class Solution {
public:
    static bool cmp(vector<int> a,vector<int> b){
        return a[0]<b[0];
    }
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        int ans=0;
        sort(intervals.begin(),intervals.end(),cmp);
        for(int i=0;i<intervals.size();i++){
            for(int j=i+1;j<intervals.size();j++){
                if(intervals[i][1]>=intervals[j][0]) ans++;
            }
        }
        return ans;
    }
};