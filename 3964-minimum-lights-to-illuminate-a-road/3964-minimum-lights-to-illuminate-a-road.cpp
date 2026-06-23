class Solution {
public:
    
    int minLights(vector<int>& lights) {
        int n=lights.size();
        vector<int> vis1(n+1,0);
        for(int i=0;i<n;i++){
            if(lights[i]>0) {
                int l=max(0,i-lights[i]);
                int r=min(n-1,i+lights[i]);
                vis1[l]++;
                if(r+1<n) vis1[r+1]--;
            }
        }
        vector<int> vis(n,0);
        int curr=0;

        for(int i=0;i<n;i++){
            curr+=vis1[i];
            vis[i]=(curr>0);
        }
        int ans=0;
        for(int i=0;i<n;){
            if(vis[i]) i++;
            else{
                ans++;
                int pos=min(i+1,n-1);
                int l=max(0,pos-1);
                int r=min(n-1,pos+1);
                for(int j=l;j<=r;j++) vis[j]=1;
                i=r+1;
            }
        }
        return ans;
    }
};