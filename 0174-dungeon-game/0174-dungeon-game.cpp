class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        vector<vector<int>> dp;
        for(int i=0;i<dungeon.size();i++){
            vector<int> a;
            for(int j=0;j<dungeon[i].size();j++){
                a.push_back(-1);
            }
            dp.push_back(a);
        }
        for(int i=dungeon.size()-1;i>=0;i--){
            for(int j=dungeon[i].size()-1;j>=0;j--){
                if(i==dungeon.size()-1 and j==dungeon[i].size()-1) dp[i][j] = dungeon[i][j];
                else if(i==dungeon.size()-1) dp[i][j] = dp[i][j+1] + dungeon[i][j];
                else if(j==dungeon[i].size()-1) dp[i][j] = dp[i+1][j] + dungeon[i][j];
                else dp[i][j] = max(dp[i+1][j],dp[i][j+1])+dungeon[i][j];
                dp[i][j] = min(dp[i][j],0);
            }
        }
        return abs(dp[0][0])+1;
    }
};