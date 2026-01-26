class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=INT_MAX,i=0;
        while(i<nums.size()-1){
            if(nums[i]==nums[i+1]){
                int x = nums[i];
                while((i+1)<nums.size() and nums[i+1]==x){
                    nums[i+1] = k;
                    i++;
                }
            }i++;
        }
        int l = -1, r = 0;
        while(r<nums.size()){
            if(l==-1 and nums[r] == k){
                l = r;
                r++;
            }else if(l!=-1 and nums[r]!=k){
                swap(nums[r],nums[l]);
                l++;
                r++;
            }else if(l==-1 and nums[r]!=k){
                r++;
            }else if(l!=-1 and nums[r]==k){
                r++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==k) return i;
            // cout<<nums[i]<<" ";
        }
        return nums.size();
    }
};