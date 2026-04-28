class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        if(nums.size()<3) return nums;
         vector<int> res;
         int maxi = nums[nums.size()-1];
         vector<int> suf(nums.size());
         suf[nums.size()-1] = nums[nums.size()-1];
         for(int i=nums.size()-2;i>=0;i--){
            maxi = max(maxi,nums[i]);
            suf[i]=maxi;
         }
         maxi = nums[0];
         res.push_back(nums[0]);
         for(int i=1;i<nums.size()-1;i++){
            if(nums[i]>maxi or nums[i]>suf[i+1]) res.push_back(nums[i]);
            maxi = max(maxi,nums[i]);
         }
         res.push_back(nums[nums.size()-1]);
         return res;
    }
};