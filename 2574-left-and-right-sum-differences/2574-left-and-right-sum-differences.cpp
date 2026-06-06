class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftSum(nums.size());
        vector<int> rightSum(nums.size());
        leftSum[0] = 0;
        rightSum[nums.size()-1]=0;
        for(int i=1;i<nums.size();i++){
            leftSum[i] = leftSum[i-1] + nums[i-1];
            int k = nums.size()-i-1;
            rightSum[k] = rightSum[k+1] + nums[k+1];
        }
        vector<int> res(nums.size());
        for(int i=0;i<nums.size();i++){
            res[i] = abs(leftSum[i]-rightSum[i]);
        }return res;
    }
};