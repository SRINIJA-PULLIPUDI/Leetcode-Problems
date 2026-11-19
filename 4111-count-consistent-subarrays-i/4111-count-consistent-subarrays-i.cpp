class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int res=0;
        for(int i=0;i<nums.size();i++){
            int mini = nums[i], a = nums[i];
            for(int j=i+1;j<nums.size();j++){
                a &= nums[j];
                mini = min(mini, nums[j]);
                if(mini == a) res++;
            }
        }
        return res+(int)nums.size();
    }
};