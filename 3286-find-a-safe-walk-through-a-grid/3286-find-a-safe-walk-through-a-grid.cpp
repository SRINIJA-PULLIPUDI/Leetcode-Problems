class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        vector<vector<int>> dist(grid.size(), vector<int>(grid[0].size(),INT_MAX));
        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>
        , greater<pair<int,pair<int,int>>>> q;
        q.push({grid[0][0],{0,0}});
        dist[0][0] = grid[0][0];
        vector<int> row = {0,1,0,-1};
        vector<int> col = {1,0,-1,0};
        while(!q.empty()){
            int wt = q.top().first;
            int i = q.top().second.first, j = q.top().second.second;
            q.pop();
            for(int k=0;k<4;k++){
                int indI = i+row[k], indJ = j+col[k];
                if(indI>=0 and indI<grid.size() and indJ>=0 and indJ<grid[0].size()){
                    if(grid[indI][indJ]+wt < dist[indI][indJ]){
                        dist[indI][indJ] = grid[indI][indJ]+wt;
                        q.push({dist[indI][indJ], {indI, indJ}});
                    }
                }
            }
        }
        if(dist[grid.size()-1][grid[0].size()-1] < health) return true;
        return false;
    }
};