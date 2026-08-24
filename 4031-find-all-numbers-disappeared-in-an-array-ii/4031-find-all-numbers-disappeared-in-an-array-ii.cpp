#define ll long long
class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        ll l = lower;
        for(ll i=0;i<nums.size();i++){
            if(nums[i]<l) continue;
            if(nums[i]>upper) break;
            if(nums[i]>l){
                res.push_back({(int)l,nums[i]-1});
            }
            l = nums[i]+1;
        }
        if(l<=upper) res.push_back({(int)l, upper});
        return res;
    }
};