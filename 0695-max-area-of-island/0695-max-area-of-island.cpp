class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        vector<int> row = {-1, 0, 1, 0};
        vector<int> col = {0, 1, 0, -1};
        int res=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    int r = 1;
                    queue<pair<int,int>> q;
                    q.push({i, j});
                    grid[i][j] = 0;
                    while(!q.empty()){
                        int I = q.front().first, J = q.front().second;
                        q.pop();
                        for(int k=0;k<4;k++){
                            int indI = I+row[k], indJ = J+col[k];
                            if(indI>=0 and indI<grid.size() and indJ>=0 and indJ<grid[0].size() and grid[indI][indJ] == 1){
                                r++;
                                q.push({indI, indJ});
                                grid[indI][indJ] = 0;
                            }
                        }
                    }
                    res = max(res, r);
                }
            }
        }return res;
    }
};