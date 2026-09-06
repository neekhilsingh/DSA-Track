class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit=0;
        int i=n-1,j=n-2;
        while(j>-1){
            if(prices[j]<prices[i]){
                profit+=prices[i]-prices[j];   
            }
            i=j;
            j--;
        }
        return profit;
    }
};