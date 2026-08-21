class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> a = {nums[0]};
        vector<int> b = {nums[1]};
        for(int i=2;i<nums.size();i++){
            if(a.back()> b.back()) a.push_back(nums[i]);
            else b.push_back(nums[i]);
        }
        int k=0;
        for(int i=0;i<a.size();i++){
            nums[k++] = a[i];
        }
        for(int i=0;i<b.size();i++){
            nums[k++] = b[i];
        }
        return nums;
    }
};