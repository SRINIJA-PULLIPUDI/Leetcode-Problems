class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int> res;
        int k = nums.size();
        while(k>0){
            for(auto &i:mp){
                if(i.second>0){
                    res.push_back(i.first);
                    i.second--;
                    k--;
                }
            }
        }return res;
    }
};