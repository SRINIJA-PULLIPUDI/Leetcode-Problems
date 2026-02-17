class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int l=-1,r=nums.size();
        while((r-l)>1){
            int mid = l+(r-l)/2;
            if(mid%2!=0) mid--;
            if(nums[mid]==nums[mid+1]) l=mid+1;else r=mid-1;
        }
        return nums[l+1];
    }
};