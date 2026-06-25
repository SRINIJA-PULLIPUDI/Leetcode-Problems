class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0] or grid[grid.size()-1][grid.size()-1]) return -1;
        if(grid.size()==1) return 1;
        queue<pair<int,pair<int,int>>>q;
        q.push({1,{0,0}});
        vector<vector<int>> dist(grid.size(), vector<int>(grid[0].size(),INT_MAX));
        dist[0][0] = 1;
        vector<int> row = {-1, -1, 0, 1, 1, 1, 0, -1};
        vector<int> col = {0, 1, 1, 1, 0, -1, -1, -1};
        while(!q.empty()){
            int wt = q.front().first;
            int i = q.front().second.first, j = q.front().second.second;
            q.pop();
            for(int k=0;k<8;k++){
                int indI = i+row[k], indJ = j+col[k];
                if(indI>=0 and indI<grid.size() and indJ>=0 and indJ<grid.size()
                    and dist[indI][indJ]>(wt+1) and grid[indI][indJ]==0){
                        if(indI==grid.size()-1 and indJ==grid.size()-1) return wt+1;
                        dist[indI][indJ] = wt+1;
                        q.push({wt+1, {indI,indJ}});
                }
            }
        }
        return -1;
    }
};