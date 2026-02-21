#define ll long long
class Solution {
public:
int predicate(ll mid,vector<int> &nums){
    ll n = 0;
    for(ll i=0;i<nums.size();i++){
        if(nums[i]<=mid) n+=1;
        else n+=(ceil(nums[i]/(mid*1.0)));
    }
    if(n<=(mid*(mid*1ll))) return 0;
    return 1;
}
    int minimumK(vector<int>& nums) {
        int l=0,r=1e5+1;
        while((r-l)>1){
            int mid = (l+r)/2;
            if(predicate(mid,nums)) l=mid;else r=mid;
        }
        return r;
    }
};