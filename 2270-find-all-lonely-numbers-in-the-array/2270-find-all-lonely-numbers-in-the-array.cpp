class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        map<int,int> mp;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]==1 and mp[nums[i]+1]==0 and mp[nums[i]-1]==0) 
            res.push_back(nums[i]);
        }
        return res;
    }
};