class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1,block=0;
        if(nums.size()==1 and nums[0]==target) return 0;
        if(nums.size()==1) return -1;
        if(target==nums[0]) return 0;
        if(target==nums[r]) return r;
        while((r-l)>1){
            int mid = l+(r-l)/2;
            if(nums[mid]>nums[nums.size()-1]) l = mid;
            else r=mid;
        }
        cout<<l<<" "<<r;
        if(nums[l]==target) return l;
        if(nums[r]==target) return r;
        if(target>nums[nums.size()-1]){
            cout<<endl<<1;
            int left = -1,right = l+1;
            while((right-left)>1){
                int mid = left + (right-left)/2;
                if(nums[mid]<target) left=mid;else right=mid;
            }if(right==(l+1) or nums[right]!=target) return -1;return right;
        }
        int left = r-1,right = nums.size();
        while((right-left)>1){
            int mid = left+(right-left)/2;
            if(nums[mid]<target) left = mid;else right=mid;
        }if(right==nums.size() or nums[right]!=target) return -1;return right;
    }
};