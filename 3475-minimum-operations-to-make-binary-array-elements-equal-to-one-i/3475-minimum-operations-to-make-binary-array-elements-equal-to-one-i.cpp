int check(int n){
    if(n==1) return 1;
    else return 0;
}
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int i,c=0,r;
        for(i=0;i<nums.size()-2;i++){
            if(nums[i]==0){
                nums[i] =1;
                r=check(nums[i+1]);
                if(r==1) nums[i+1]=0;
                else nums[i+1]=1;
                r=check(nums[i+2]);
                if(r==1) nums[i+2]=0;
                else nums[i+2]=1;
                c++;
            }
        }
        /*for(i=nums.size()-2;i<nums.size();i++){
            if(i>=0 && nums[i]==0) return -1;
        }*/
        int l= nums.size()-2;
        if(l>=0 && nums[l]==0) return -1;
        else if(l+1>=0 && nums[l+1]==0) return -1;
        return c;
    }
};