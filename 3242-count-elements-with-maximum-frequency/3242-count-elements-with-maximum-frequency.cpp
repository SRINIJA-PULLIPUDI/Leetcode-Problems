class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int, int> mp;
        int m = 0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            m = max(m,mp[nums[i]]);
        }
        int s=0;
        for(auto i:mp){
            if(i.second==m) s+=i.second;
        }
        return s;

    }
};