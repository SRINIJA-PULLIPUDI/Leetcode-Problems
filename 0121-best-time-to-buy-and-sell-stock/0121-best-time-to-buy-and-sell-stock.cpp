class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0,j=0,s=0;
        int n = prices.size();
        while(i<n and j<n){
            if(prices[j]<=prices[i]){
                i = j;
                j++;
            }else{
                s=max(s,prices[j]-prices[i]);
                j++;
            }
        }
        return s;
    }
};