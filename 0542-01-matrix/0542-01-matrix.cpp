class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        vector<vector<int>> vis(mat.size(), vector<int>(mat[0].size(),0));
        vector<vector<int>> req(mat.size(), vector<int>(mat[0].size(),0));
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==0){
                    q.push({{i,j},0});
                    vis[i][j] = 1;
                }
            }
        }
        while(!q.empty()){
            int indI, indJ, dist;
            indI = q.front().first.first;
            indJ = q.front().first.second;
            dist = q.front().second;
            req[indI][indJ] = dist;
            q.pop();
            if(indI>0 and mat[indI-1][indJ]==1 and vis[indI-1][indJ]==0){
                q.push({{indI-1,indJ},dist+1});
                vis[indI-1][indJ] = 1;
            }if(indI<mat.size()-1 and mat[indI+1][indJ]==1 and vis[indI+1][indJ]==0){
                q.push({{indI+1,indJ},dist+1});
                vis[indI+1][indJ] = 1;
            }if(indJ>0 and mat[indI][indJ-1]==1 and vis[indI][indJ-1]==0){
                q.push({{indI,indJ-1}, dist+1});
                vis[indI][indJ-1] = 1;
            }
            if(indJ<mat[0].size()-1 and mat[indI][indJ+1]==1 and vis[indI][indJ+1]==0){ 
                q.push({{indI,indJ+1}, dist+1});
                vis[indI][indJ+1] = 1;
            }
        }return req;
    }
};