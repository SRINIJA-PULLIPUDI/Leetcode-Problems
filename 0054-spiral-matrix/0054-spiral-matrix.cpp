class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int l = 0, r = matrix[0].size()-1;
        int t = 0, b = matrix.size()-1;
        vector<int> req;
        while(l<=r and t<=b){
            for(int i=l;i<=r;i++){
                req.push_back(matrix[t][i]);
            }
            t+=1;
            for(int i=t;i<=b;i++){
                req.push_back(matrix[i][r]);
            }
            r-=1;
            if(t<=b){
                for(int i=r;i>=l;i--){
                    req.push_back(matrix[b][i]);
                }
                b-=1;
            }
            if(l<=r){
                for(int i=b;i>=t;i--){
                    req.push_back(matrix[i][l]);
                }
                l+=1;
            }
        }
        return req;
    }
};