class Solution {
public:
    int sub(vector<int>& nums, int k){
        if(k==0) return 0;
        int i=0,j=0,res=0;
        map<int,int> mp;
        while(j<nums.size()){
            mp[nums[j]]++;
            while(mp.size()>k and i<j){
                mp[nums[i]]--;
                if(mp[nums[i]]==0) mp.erase(nums[i]);
                i++;
            }
            res+= (j-i+1);
            j++;
        }
        return res;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int a = sub(nums,k);
        int b = sub(nums,(k-1));
        cout<<a<<" "<<b;
        return a-b;
    }
};