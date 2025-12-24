class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int m = nums[k-1]-nums[0];
        for(int i=k;i<nums.size();i++){
            m = min(m,nums[i]-nums[i-k+1]);
        }
        return m;
    }
};