class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int> res;
        map<int,int> mp1;
        for(int i=0;i<nums.size();i++){
            if(mp1[nums[i]]<k){
                res.push_back(nums[i]);
                mp1[nums[i]]++;
            }
        }return res;
    }
};