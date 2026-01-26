class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = INT_MAX,c=0,i=0;
        while(i<nums.size()-1){
            if(nums[i]==nums[i+1] and c==0){
                c++;
            }else if(nums[i]==nums[i+1] and c==1){
                int x = nums[i];
                while((i+1)<nums.size() and nums[i+1]==x){
                    nums[i+1] = k;
                    i++;
                }
                c=0;
            }else if(nums[i]!=nums[i+1]) c=0;
            i++;
        }
        int left=-1,right=0;
        while(right<nums.size()){
            if(left!=-1 and nums[right]!=k){
                swap(nums[left],nums[right]);
                left++;
                right++;
            }else if(left==-1 and nums[right]==k){
                left = right;
                right++;
            }else if(left==-1 and nums[right]!=k){
                right++;
            }else if(left!=-1 and nums[right]==k){
                right++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==k) return i;
            cout<<nums[i]<<" ";
        }
        return nums.size();
    }
};