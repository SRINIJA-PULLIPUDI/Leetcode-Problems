class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        vector<vector<int>> row(grid.size(), vector<int>(grid[0].size(),0));
        vector<vector<int>> col(grid.size(), vector<int>(grid[0].size(),0));
        for(int i=0;i<grid.size();i++){
            int r=0,k=0;
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1) r++;
            }
            if(r>1) k=1;
            if(k){
                for(int j=0;j<grid[0].size();j++){
                    if(grid[i][j]==1) row[i][j] = 1;
                }
            }
        }
        for(int j=0;j<grid[0].size();j++){
            int r=0,k=0;
            for(int i=0;i<grid.size();i++){
                if(grid[i][j]==1) r++;
            }
            if(r>1) k=1;
            if(k){
                for(int i=0;i<grid.size();i++){
                    if(grid[i][j]==1) col[i][j] = 1;
                }
            }
        }
        int res=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(row[i][j] or col[i][j]) res++;
            }
        }return res;
    }
};