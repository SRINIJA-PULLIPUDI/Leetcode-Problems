class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int r = grid.size(),c=grid[0].size();
        int minr = INT_MAX, minc = INT_MAX;
        int maxr = 0, maxc = 0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==1) {
                    minr = min(minr, j);
                    maxr = max(maxr, j);

                    minc = min(minc, i);
                    maxc = max(maxc, i);
                }
            }
        }
        int l = abs((maxr+1)-(minr));
        int b = abs((maxc+1)-(minc));
        return l*b;
    }
};