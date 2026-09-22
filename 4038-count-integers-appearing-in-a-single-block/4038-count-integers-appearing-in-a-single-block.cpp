class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,pair<int,int>> mp;
        unordered_map<int,int> mp2;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])==mp.end()){
                mp[nums[i]].first = i;
                mp[nums[i]].second = i;
            }
            mp[nums[i]].second = i;
            mp2[nums[i]]++;
        }int res = 0;
        for(auto i:mp){
            if(i.second.second-i.second.first+1 == mp2[i.first]) res++;
        }return res;
    }
};