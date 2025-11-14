class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        queue <int> q;
        int n = nums.size();
        long long s = 0;
        map<long long,long long> mp;
        long long left = 0,right = 0,m = 0;
        while(right<n){
            mp[nums[right]]+=1;
            s+=nums[right];
            while(mp[nums[right]]>1){
                s-=nums[left];
                mp[nums[left]]-=1;
                left+=1;
            }
            m = max((long long)m,(long long)s);
            right+=1;
        }
        return m;
    }
};