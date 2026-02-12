class Solution {
public:
int predicate(int x,vector<int>& nums){
    int l=-1,r=nums.size();
    while((r-l)>1){
        int mid = l+(r-l)/2;
        if(nums[mid]<x) l = mid;else r=mid;
    }return r;
}
    int searchInsert(vector<int>& nums, int target) {
        int res = predicate(target,nums);
        return res;
    }
};