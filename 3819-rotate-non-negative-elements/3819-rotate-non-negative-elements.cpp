class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        vector<int> a;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0) a.push_back(nums[i]);
        }if(a.size()<2) return nums;
        if(k>a.size()) k%=a.size();
        reverse(a.begin(),a.begin()+k);
        reverse(a.begin()+k,a.end());
        reverse(a.begin(),a.end());
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                nums[i] = a[j];
                j++;
            }
        }
        return nums;
    }
};