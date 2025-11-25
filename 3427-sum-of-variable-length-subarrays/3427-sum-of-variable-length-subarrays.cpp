class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n);
        pre[0] = nums[0];
        for(int i=1;i<nums.size();i++){
            pre[i] = pre[i-1]+nums[i];
        }
        int st = 0,res=0;
        for(int i=0;i<nums.size();i++){
            st = max(0,i-nums[i]);
            if((st)>0)
            res+= (pre[i]-pre[st-1]);
            else res+=(pre[i]);
            cout<<res<<endl;
        }
        return res;
    }
};