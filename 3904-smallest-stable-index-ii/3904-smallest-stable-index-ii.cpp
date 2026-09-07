class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> mini(nums.size());
        mini[nums.size()-1] = nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
            mini[i] = min(nums[i], mini[i+1]);
        }
        int maxi = INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxi = max(maxi, nums[i]);
            if(maxi-mini[i]<=k) return i;
        }
        return -1;
    }
};