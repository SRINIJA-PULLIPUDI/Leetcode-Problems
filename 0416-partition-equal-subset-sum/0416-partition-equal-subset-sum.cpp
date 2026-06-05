class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }if(sum%2) return false;
        unordered_set<int> s = {0};
        for(int i=nums.size()-1;i>=0;i--){
            unordered_set<int> temp;
            for(auto j:s){
                if(j+nums[i]<(sum/2)) temp.insert(j+nums[i]);
                else if(j+nums[i]==(sum/2)) return true;
            }
            for(auto j:temp){
                s.insert(j);
            }
        }
        return false;
    }
};