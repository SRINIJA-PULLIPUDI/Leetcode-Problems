class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        map<pair<int, int>, int> mp;
        vector<int> a(matrix.size()+1,0);
        vector<int> b(matrix[0].size()+1,0);
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    // if(mp[{0,j}]==0) mp[{0,j}]=2;
                    // else mp[{0,j}]=3;
                    // if(mp[{i,0}]==0) mp[{i,0}]=1;
                    // else mp[{i,0}] = 3;
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                    a[i] = 1;
                    b[j] = 1;
                }
            }
        }
        for(auto i:mp){
            cout<<i.first.first<<" "<<i.first.second<<" "<<i.second<<endl;
        }
        for(int i=0;i<matrix.size();i++){
            if(a[i]==1){
                for(int j=0;j<matrix[i].size();j++){
                    matrix[i][j] = 0;
                }
            }
        }
        for(int j=0;j<matrix[0].size();j++){
            if(b[j]==1){
                for(int i=0;i<matrix.size();i++){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
