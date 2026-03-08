class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int res=-1,mini=INT_MAX;
        for(int i=0;i<capacity.size();i++){
            if(capacity[i]>=itemSize and capacity[i]<mini){
                mini=capacity[i];
                res=i;
            }
        }return res;
    }
};