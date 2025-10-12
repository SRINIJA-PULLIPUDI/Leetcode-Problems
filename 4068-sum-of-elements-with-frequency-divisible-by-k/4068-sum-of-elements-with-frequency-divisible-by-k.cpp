class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int s=0;
        for(auto i:mp){
            if(i.second%k==0) s+=(i.first*i.second);
        }
        return s;
    }
};