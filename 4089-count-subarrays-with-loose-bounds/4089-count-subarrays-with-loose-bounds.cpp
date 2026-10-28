#define ll long long
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        ll res = 0, c=0,i=0;
        for(ll j=0;j<nums.size();j++){
            if(nums[j]>=minK and nums[j]<=maxK){
                c+=j-i+1;
            }else{
                i=j+1;
                res+=c;
                c=0;
                
            }
        }
        res+=c;
        return res;
    }
};