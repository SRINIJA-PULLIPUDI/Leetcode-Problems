class Solution {
public:
int predicate(int x, vector<int>& nums){
    int l=-1,r=nums.size();
    while((r-l)>1){
        int mid = l+(r-l)/2;
        if(nums[mid]<x) l = mid;else r=mid;
    }return r;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = predicate(target,nums);
        int last = predicate(target+1,nums)-1;
        vector<int> a;
        if(first==nums.size() or nums[first]!=target){
            a.push_back(-1);
            a.push_back(-1);
            return a;
        }
        a.push_back(first);
        a.push_back(last);
        return a;
    }
};