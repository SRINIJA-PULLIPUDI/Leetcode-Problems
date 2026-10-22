class Solution {
public:
    int fun(vector<int>&nums){
        vector<int> a = nums;
        for(int i=0;i<nums.size();i++){
            a.push_back(a[i]);
        }
        int c = 1;
        for(int i=1;i<a.size();i++){
            if(a[i]<a[i-1]) c=1;
            else{
                c++;
                if(c==nums.size()) return (i-nums.size()+1);
            }
        }c=1;
        for(int i=1;i<a.size();i++){
            if(a[i]>a[i-1]) c=1;
            else{
                c++;
                if(c==nums.size()) return (i-nums.size()+2);
            }
        }return 1e9;
    }
    int minOperations(vector<int>& nums) {
        if(nums.size()==1) return 0;
        int res = fun(nums);
        reverse(nums.begin(), nums.end());
        int res1 = fun(nums);
        if(res1!=1e9) res = min(res, res1+1);
        if(res>=1e9) return -1;
        return res;
    }
};