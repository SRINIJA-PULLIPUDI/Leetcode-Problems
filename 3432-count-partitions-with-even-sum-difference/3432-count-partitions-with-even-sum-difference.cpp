class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size(),s = 0;
        for(int i=1;i<n;i++){
            nums[i] += nums[i-1];
            cout<<nums[i]<<" ";
        }
        for(int i=0;i<n-1;i++){
            int k = nums[n-1]-nums[i];
            if(((abs(nums[i]-k))%2)==0){
                s+=1;
            }
        }
        return s;
    }
};