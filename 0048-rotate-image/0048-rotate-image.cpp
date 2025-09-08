class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int c = matrix.size()-1;
        vector<vector<int>> a(n,vector<int> (n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                a[j][c] = matrix[i][j];
            }
            c-=1;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                matrix[i][j] = a[i][j];
            }
        }
        
    }
};