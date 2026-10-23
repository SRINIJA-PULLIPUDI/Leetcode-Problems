class NumArray {
private:
    vector<int> a;
public:
    NumArray(vector<int>& nums) {
        a.resize(nums.size()+1,0);
        for(int i=0;i<nums.size();i++){
            a[i+1] = a[i]+nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        return a[right+1]-a[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */