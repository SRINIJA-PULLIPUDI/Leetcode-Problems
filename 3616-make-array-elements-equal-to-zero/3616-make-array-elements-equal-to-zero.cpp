class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        vector<int> pre(nums.size());
        pre[0] = nums[0];
        int req=0;
        for(int i=1;i<nums.size();i++){
            pre[i] = pre[i-1] + nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                int a = pre[i];
                int b = pre[nums.size()-1]-pre[i];
                if((a-b)>=0 and (a-b)<=1) req+=1;
                if((b-a)>=0 and (b-a)<=1) req+=1;
            }
            
        }
        return req;
    }
};