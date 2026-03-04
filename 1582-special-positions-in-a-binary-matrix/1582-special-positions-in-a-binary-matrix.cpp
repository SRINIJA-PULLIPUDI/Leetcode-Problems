class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        vector<int> a(mat.size(),0);
        vector<int> b(mat[0].size(),0);
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1){
                    a[i]++;
                    b[j]++;
                }
            }
        }int res=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(a[i]==1 and b[j]==1 and mat[i][j]==1) res++;
            }
        }
        return res;
    }
};