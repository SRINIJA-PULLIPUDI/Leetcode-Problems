class Solution {
public:
#define ll unsigned long long
    int minimumSize(vector<int>& nums, int maxOperations) {
        ll maxi = *max_element(nums.begin(),nums.end());
        ll l=1,r=maxi;
        while(l<=r){
            ll res=0;
            ll mid = l+(r-l)/2;
            for(ll i=0;i<nums.size();i++){
                if(nums[i]>mid){
                    res += (nums[i]-1)/mid;
                }
            }if(res<=maxOperations){
                r=mid-1;
            }else l=mid+1;
        }return l;
    }
};