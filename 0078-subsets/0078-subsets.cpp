class Solution {
public:
vector<vector<int>> res;
    void fun(vector<int> a,vector<int> nums,int idx){
        if(idx==nums.size()){
            res.push_back(a);
            return;
        }a.push_back(nums[idx]);
        fun(a,nums,idx+1);
        a.pop_back();
        fun(a,nums,idx+1);
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> a;
        fun(a,nums,0);
        return res;
    }
};