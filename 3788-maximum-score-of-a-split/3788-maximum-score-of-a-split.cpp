class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        int n = nums.size();
        vector<int> right(n);
        long long res=LLONG_MIN,curr=0;
        int m = nums[n-1];
        right[n-1] = m;
        for(int i=n-2;i>=0;i--){
            right[i] = m;
            m = min(nums[i],m);
        }
        for(int i=0;i<n-1;i++){
            curr+=(nums[i]);
            long long x = curr-right[i];
            res = max(res,x);
        }
        return res;
    }
};