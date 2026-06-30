class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.rbegin(),nums.rend());
        long long i=0,res=0;
        while(k--){
            if(mul>1){
                res+=((1.0*nums[i])*(mul*1.0));
            }else res+=(nums[i]*1.0);
            i++;
            mul--;
        }
        return res;
    }
};