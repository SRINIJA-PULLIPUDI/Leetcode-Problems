class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        int i = rStart,j=cStart;
        int total = rows*cols;
        int curr=1,k=1,f=0;
        vector<vector<int>> res;
        res.push_back({i,j});
        while(curr<total){
            for(int l=0;l<k;l++){
                if(f==0) j++;
                else j--;
                if(i>=0 and i<rows and j>=0 and j<cols){
                    res.push_back({i,j});
                    curr++;
                }
            }
            for(int l=0;l<k;l++){
                if(f==0) i++;
                else i--;
                if(i>=0 and i<rows and j>=0 and j<cols){
                    res.push_back({i,j});
                    curr++;
                }
            }
            k++;
            if(f==0) f = 1;
            else f = 0;
        }
        return res;
    }
};