class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        map<int,int> f;
        for(auto i:mp){
            f[i.second]++;
        }
        for(int i=0;i<nums.size();i++){
            if(f[mp[nums[i]]]==1) return nums[i];
        }return -1;
    }
};