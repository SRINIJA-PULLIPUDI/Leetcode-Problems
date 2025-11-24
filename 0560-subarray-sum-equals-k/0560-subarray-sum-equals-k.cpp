class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int> pre(nums.size(),0);
        map<int,int> d;
        d[0] = 1;
        for(int i=1;i<nums.size();i++){
            nums[i] +=nums[i-1];
        }
        int c = 0;
        for(int i=0;i<nums.size();i++){
            if(d.find(nums[i]-k)!=d.end()){
                c+=d[nums[i]-k];
            }
            d[nums[i]]++;
        }
        return c;
    }
};