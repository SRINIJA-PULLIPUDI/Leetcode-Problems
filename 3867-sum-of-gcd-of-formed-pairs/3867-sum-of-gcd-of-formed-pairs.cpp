class Solution {
public:
#define ll long long
    long long gcdSum(vector<int>& nums) {
        vector<ll> prev(nums.size());
        prev[0] = gcd(nums[0], nums[0]);
        ll maxi = nums[0];
        for(int i=1;i<nums.size();i++){
            maxi = max(maxi, (ll)nums[i]);
            prev[i] = gcd(maxi, (ll)nums[i]);
        }
        sort(prev.begin(), prev.end());
        ll sum = 0;
        for(int i=0;i<prev.size()/2;i++){
            sum += gcd(prev[i], prev[prev.size()-i-1]);
        }
        return sum;
    }
};