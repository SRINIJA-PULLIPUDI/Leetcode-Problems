class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int res=0,i=0,j=0,curr=1;
        if(k<2) return 0;
        while(j<nums.size()){
            curr*=nums[j];
            while(curr>=k){
                curr= curr/nums[i];
                i++;
            }
            res+=(j-i+1);
            j++;
        }
        return res;
    }
};