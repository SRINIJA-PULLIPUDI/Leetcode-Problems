class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int i=0,j=0;
        int s = 0, l = 0,mini = INT_MAX;
        while(i<n and j<n){
            if(s<target){
                s+=nums[j];
                j++;
                l++;
            }while(s>=target){
                mini = min(mini, l);
                s-=nums[i];
                i++;
                l--;                
            }
        }
        if(mini == INT_MAX) return 0;
        else return mini;
    }
};