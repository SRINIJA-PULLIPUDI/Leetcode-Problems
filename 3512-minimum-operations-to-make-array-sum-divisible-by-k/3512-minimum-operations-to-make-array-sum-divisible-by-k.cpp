class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int s=0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
        }
        if(s%k==0) return 0;
        if(s>k) return (s%k);
        if(s<k) return s;
        return s;
    }
};