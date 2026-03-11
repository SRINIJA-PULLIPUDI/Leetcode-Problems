class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=0,r=(nums.size());
        while((r-l)>1){
            int mid = l+(r-l)/2;
            if(nums[mid]>nums[mid-1]) l=mid;else r=mid;
        }return l;
    }
};