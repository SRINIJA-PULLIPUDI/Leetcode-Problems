class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int c=0;
        int s = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==0) c++;
            s^=nums[i];
        }
        if(nums[0]==0) c++;
        if(c==nums.size()) return 0;
        if(s==0) return nums.size()-1;
        return nums.size();
    }
};