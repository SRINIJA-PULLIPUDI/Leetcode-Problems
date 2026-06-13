class Solution {
public:
void dfs(int i, int j,vector<vector<int>>& grid, vector<vector<int>>&vis){
    if(i>0 and vis[i-1][j]==0 and grid[i-1][j]==1){
        vis[i-1][j] = 1;
        dfs(i-1,j,grid,vis);
    }if(i<grid.size()-1 and vis[i+1][j]==0 and grid[i+1][j]==1){
        vis[i+1][j]=1;
        dfs(i+1,j,grid,vis);
    }if(j>0 and vis[i][j-1]==0 and grid[i][j-1]==1){
        vis[i][j-1] = 1;
        dfs(i,j-1,grid,vis);
    }if(j<grid[0].size()-1 and grid[i][j+1]==1 and vis[i][j+1]==0){
        vis[i][j+1] = 1;
        dfs(i,j+1,grid,vis);
    }
}
    int numEnclaves(vector<vector<int>>& grid) {
        vector<vector<int>> vis(grid.size(),vector<int>(grid[0].size(),0));
        for(int i=0;i<grid.size();i++){
            if(grid[i][0]==1) {
                dfs(i,0,grid,vis);
                vis[i][0]=1;
            }if(grid[i][grid[0].size()-1]==1){
                dfs(i,grid[0].size()-1,grid,vis);
                vis[i][grid[0].size()-1]=1;
            }
        }
        for(int i=0;i<grid[0].size();i++){
            if(grid[0][i]==1){
                dfs(0,i,grid,vis);
                vis[0][i]=1;
            }if(grid[grid.size()-1][i]==1){
                dfs(grid.size()-1,i,grid,vis);
                vis[grid.size()-1][i]=1;
            }
        }
        int res=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1 and vis[i][j]==0) res++;
            }
        }
        return res;
    }
};