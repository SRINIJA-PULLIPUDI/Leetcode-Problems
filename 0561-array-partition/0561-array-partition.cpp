class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());
        int s=0,i=0;
        while((i+2)<=nums.size()){
            s+=(nums[i+1]);
            i+=2;
        }
        return s;
    }
};