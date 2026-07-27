class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = 0, maxi2 = 0,ind;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi = nums[i];
                ind = i;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(ind!=i){
                maxi2 = max(maxi2,nums[i]);
            }
        }
        return (maxi-1)*(maxi2-1);
    }
};