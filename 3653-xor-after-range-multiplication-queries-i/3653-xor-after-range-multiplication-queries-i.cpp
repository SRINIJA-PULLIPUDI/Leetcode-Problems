class Solution {
public:
#define ll unsigned long long
    unsigned long long mod = 1e9+7;
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        for(int i=0;i<queries.size();i++){
            int idx = queries[i][0];
            while(idx<=queries[i][1]){
                if(idx>=0 and idx<nums.size()){
                    nums[idx] = ((ll)((ll)nums[idx]*(ll)queries[i][3]) % (mod)); 
                }
                idx+=queries[i][2];
            }
        }
        int res=0;
        for(int i=0;i<nums.size();i++){
            res ^= nums[i];
        }
        return res;
    }
};