class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<long long>> mat(n,vector<long long>(n,INT_MAX));
        for(int i=0;i<n;i++){
            mat[i][i] = 0;
        }
        for(int i=0;i<edges.size();i++){
            mat[edges[i][0]][edges[i][1]] = edges[i][2];
            mat[edges[i][1]][edges[i][0]] = edges[i][2];
        }
        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    mat[i][j] = min(mat[i][j], mat[i][k]+mat[k][j]);
                }
            }
        }
        int mini = INT_MAX;
        int res,c;
        for(int i=0;i<n;i++){
            c=0;
            for(int j=0;j<n;j++){
                if(mat[i][j]<=distanceThreshold) c++;
            }
            if(c<=mini){
                mini=c;
                res = i;
            }
        }
        return res;
    }
};