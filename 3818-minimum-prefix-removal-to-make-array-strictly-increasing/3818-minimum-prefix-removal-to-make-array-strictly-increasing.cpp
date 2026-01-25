class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int r = -1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>=nums[i+1]) r = i;
        }
        return r+1;
    }
};