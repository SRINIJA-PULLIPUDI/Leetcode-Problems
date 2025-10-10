class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        for(auto i:mp){
            cout<<i.first<<" "<<i.second<<endl;
        }
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            if(mp[target-nums[i]] and mp[target-nums[i]]!=i) {
                res.push_back(i);
                res.push_back(mp[target-nums[i]]);
                return res;
            }
        }
        return res;
    }
};