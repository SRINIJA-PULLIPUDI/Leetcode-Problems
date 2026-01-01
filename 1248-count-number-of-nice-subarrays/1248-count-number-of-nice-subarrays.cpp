class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        vector<int> ind;
        int s=0,res=0,i=0,j=0,left=-1,right=-1,c=0,f=0;
        while(j<nums.size()){
            if(nums[j]%2!=0){
                s++;
                ind.push_back(j);
            }
            if(s<k) j++;
            else break;
        }
        while(i<=j and j<nums.size()){
            if(s==k){
                j++;
                if(j<nums.size() and nums[j]%2!=0){
                    s++;
                    ind.push_back(j);
                }
                f = 0;
            }
            else{
                if(f==0) {
                    res+=(ind[c]-i+1)*((j-1)-ind[ind.size()-2]+1);
                    f = 1;
                }
                if(nums[i]%2!=0){
                    s--;
                    c++;
                }
                i++;
            }
        }
        if(s==k){
            res+=(ind[c]-i+1)*((j-1)-ind[ind.size()-1]+1);
        }
        return res;
    }
};