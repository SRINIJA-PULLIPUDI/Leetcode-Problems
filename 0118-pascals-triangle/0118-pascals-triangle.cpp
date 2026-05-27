class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for(int i=0;i<numRows;i++){
            vector<int> r;
            for(int j=0;j<=i;j++){
                if(j>0 and j<i) r.push_back(res[i-1][j-1]+res[i-1][j]);
                else r.push_back(1); 
            }
            res.push_back(r);
        }
        return res;
    }
};