class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int res=0;
        for(int i=0;i<nums.size();i++){
            map<int,int> omp;
            map<int,int> emp;
            if(nums[i]%2==0) emp[nums[i]]++;else omp[nums[i]]++;
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]%2==0){
                    emp[nums[j]]++;
                }else omp[nums[j]]++;
                if(omp.size()==emp.size()) res = max(res,(j-i+1));
            }
        }return res;
    }
};