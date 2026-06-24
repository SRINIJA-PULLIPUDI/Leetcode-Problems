class Solution {
public:
    int Sum(int n){
        int sum=0;
        while(n!=0){
            int r = n%10;
            sum+=r;
            n/=10;
        }return sum;
    }
    int minElement(vector<int>& nums) {
        int mini = INT_MAX;
        for(int i=0;i<nums.size();i++){
            mini = min(mini, Sum(nums[i]));
        }return mini;
    }
};