class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int maxi = 1,s=1;
        for(int i=0;i<nums.size()-1;i++){
            cout<<nums[i+1]-nums[i]<<endl;
            if(nums[i]==nums[i+1]) continue;
            else if(abs(nums[i]-nums[i+1])==1){
                s++;
                maxi = max(maxi,s);
            }else s=1;
        }return maxi;
    }
};