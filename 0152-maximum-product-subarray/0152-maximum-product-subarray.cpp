class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res = INT_MIN;
        for(int i=0;i<nums.size();i++){
            res = max(res,nums[i]);
        }
        int maxi = 1,mini=1;
        for(int i=0;i<nums.size();i++){
            int s = maxi*nums[i];
            maxi = max({nums[i],s,(mini*nums[i])});
            mini = min({nums[i],s,(mini*nums[i])});
            res = max(res,maxi);
        }return res;
    }
};