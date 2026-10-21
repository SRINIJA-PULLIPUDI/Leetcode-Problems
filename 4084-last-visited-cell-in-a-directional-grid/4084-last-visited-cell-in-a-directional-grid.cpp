class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        vector<vector<int>> vis(grid.size(), vector<int>(grid[0].size()));
        queue<pair<int,int>> q;
        q.push({0,0});
        vis[0][0] = 1;
        int indI=0, indJ=0;
        while(!q.empty()){
            int i = q.front().first, j = q.front().second;
            q.pop();
            indI = i, indJ = j;
            if(grid[i][j]=='R') j++;
            else if(grid[i][j]=='L') j--;
            else if(grid[i][j]=='U') i--;
            else i++;
            if(i>=0 and i<grid.size() and j>=0 and j<grid[0].size() and !vis[i][j]) {
                q.push({i,j});
                vis[i][j] = 1;
            }
        }
        return {indI, indJ};
    }
};