class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        vector<vector<int>> res(n, vector<int>(n));
        for(int i=0;i<n;i++){
            int k = rowShift[i];
            for(int j=0;j<n;j++){
                res[i][(j-k+n)%n] = grid[i][j];
            }
        }
        vector<vector<int>> result(n, vector<int>(n));
        for(int j=0;j<n;j++){
            int k = colShift[j];
            for(int i=0;i<n;i++){
                result[(i-k+n)%n][j] = res[i][j];
            }
        }
        return result;
    }
};