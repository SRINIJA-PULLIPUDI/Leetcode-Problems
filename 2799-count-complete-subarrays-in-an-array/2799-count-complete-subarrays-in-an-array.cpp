class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        map<int,int>mp;
        int res=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }for(int i=0;i<nums.size();i++){
            map<int,int> mp1;
            for(int j=i;j<nums.size();j++){
                mp1[nums[j]]++;
                if(mp1.size()==mp.size()) res++;
            }
        }return res;
    }
};