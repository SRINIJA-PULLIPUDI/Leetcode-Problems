class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> res;
        int x,y;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }for(int i=1;i<=nums.size();i++){
            if(mp[i]==2) x = i;
            else if(mp[i]==0) y = i;
        }
        res.push_back(x);
        res.push_back(y);
        return res;
    }
};