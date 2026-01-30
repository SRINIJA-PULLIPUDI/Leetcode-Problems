class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int x = (n*(n+1))/2;
        int c=0;
        for(int i=0;i<nums.size();i++){
            c+=nums[i];
        }return x-c;
    }
};