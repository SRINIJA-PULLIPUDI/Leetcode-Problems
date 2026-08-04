class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        map<int,int> mp;
        int mini = INT_MAX, maxi = INT_MIN;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            mini = min(mini, nums[i]);
            maxi = max(maxi, nums[i]);
        }vector<int> res;
        for(int i=mini+1;i<maxi;i++){
            if(mp[i]==0) res.push_back(i);
        }return res;
    }
};