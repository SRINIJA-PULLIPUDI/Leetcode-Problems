class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int> r;
        int a = -1;
        int l=nums.size();
        if(k==1){
            for(int i=0;i<l;i++){
                r.push_back(nums[i]);
            }
            return r;
        }
        for(int i=0;i<l && i+k<=nums.size();i++){
            int c=0,id=0;
            for(int j=i;j<k+i-1;j++){
                if((nums[j] < nums[j+1]) && (nums[j]+1==nums[j+1])) c++;
                id=j;
            }
            if((c)==(k-1)) r.push_back(nums[id+1]);
            else r.push_back(a);
        }
        return r;
    }
};