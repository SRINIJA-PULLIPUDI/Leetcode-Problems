class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int first=INT_MAX, sec = INT_MAX;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<first){
                sec = first;
                first = nums[i];
            }else if(nums[i]<sec){
                sec = nums[i];
            }
            if(first==1 and sec==1) break;
        }
        return nums[0]+first+sec;
    }
};