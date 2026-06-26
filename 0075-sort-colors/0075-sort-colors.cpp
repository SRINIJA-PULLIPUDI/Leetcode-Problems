class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,k=nums.size()-1;
        for(int j=0;j<nums.size();j++){
            if(j>k) break;
            if(nums[j]==0){
                swap(nums[i],nums[j]);
                i++;
            }else if(nums[j]==2) {
                swap(nums[j],nums[k]);
                j--;
                k--;
            }
        }
    }
};