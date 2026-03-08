class Solution {
public:
#define ll unsigned long long
ll mod = 1e9 + 7;
    int smallestBalancedIndex(vector<int>& nums) {
        vector<ll> a(nums.size());
        a[nums.size()-1]=1;
        for(int i=nums.size()-2;i>=0;i--){
            a[i] = (nums[i+1])*(a[i+1])%mod;
        }
        ll s=0;
        for(int i=0;i<nums.size();i++){
            if(s%mod==a[i]) return i;
            s+=nums[i];
        }return -1;
    }
};