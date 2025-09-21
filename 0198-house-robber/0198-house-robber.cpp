class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),0);
        dp[0] = nums[0];
        for(int i=1;i<dp.size();i++){
            if(i==1) dp[i] = max(dp[i-1],nums[i]);
            else dp[i] = max(dp[i-1], (dp[i-2]+nums[i]));
        }
        return dp[dp.size()-1];
    }
};