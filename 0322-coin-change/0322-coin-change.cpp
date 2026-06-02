class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(amount==0) return 0;
        vector<int> dp(amount+1,10001);
        sort(coins.begin(),coins.end());
        dp[0]=0;
        for(int i=1;i<=amount;i++){
            for(int j=0;j<coins.size();j++){
                if(coins[j]<=i){
                    dp[i] = min(dp[i], 1+dp[i-coins[j]]);
                }else break;
            }
        }if(dp[amount]==10001) return -1;
        return dp[amount];
    }
};