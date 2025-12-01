class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()==1 and nums[0]==0) return true;
        if(nums[0]==0) return false;
        if(nums.size()==2 and nums[0]==0) return false; 
        int maxi = nums[0];
        for(int i=1;i<nums.size();i++){
            if(maxi==0) return false;
            if(nums[i]>maxi) maxi = nums[i];
            else if(nums[i]<maxi) maxi--;
        }
        return true;
    }
};