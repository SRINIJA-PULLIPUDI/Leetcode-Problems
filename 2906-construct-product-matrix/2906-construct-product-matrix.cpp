class Solution {
public:
#define ll long long
ll mod = 12345;
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        ll n=grid.size(),m=grid[0].size();
        vector<vector<ll>> pre(n,vector<ll>(m));
        vector<vector<ll>> suf(n,vector<ll>(m));
        pre[0][0] = (grid[0][0])%mod;
        suf[n-1][m-1] = (grid[n-1][m-1])%mod;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                if(i==0 and j==0) continue;
                else if(j==0){
                    pre[i][j] = (grid[i][j]*pre[i-1][m-1])%mod;
                }else{
                    pre[i][j] = (grid[i][j]*pre[i][j-1])%mod;
                }
            }
        }
        for(ll i=(n-1);i>=0;i--){
            for(ll j=(m-1);j>=0;j--){
                if(i==(n-1) and j==(m-1)) continue;
                else if(j==(m-1)){
                    suf[i][j] = (grid[i][j]*suf[i+1][0])%mod;
                }else{
                    suf[i][j] = (grid[i][j]*suf[i][j+1])%mod;
                }
            }
        }
        if(m==1){
            for(ll i=0;i<n;i++){
                for(ll j=0;j<m;j++){
                    if(i==0 and j==0) grid[i][j] = suf[i+1][j];
                    else if(i==(n-1) and j==(m-1)) grid[i][j] = pre[i-1][j];
                    else grid[i][j] = (pre[i-1][j]*suf[i+1][j])%mod;
                }
            }return grid;
        }
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                if(i==0 and j==0) grid[i][j] = suf[i][j+1];
                else if(i==(n-1) and j==(m-1)) grid[i][j] = pre[i][j-1];
                else if(j!=0 and j!=(m-1)){
                    cout<<1;
                    grid[i][j] = (pre[i][j-1]*suf[i][j+1])%mod;
                }else if(j==(m-1)){
                    grid[i][j] = (pre[i][j-1]*suf[i+1][0])%mod;
                }else if(j==0){
                    grid[i][j] = (pre[i-1][m-1]*suf[i][j+1])%mod;
                }
                cout<<grid[i][j]<<" ";
            }cout<<endl;
        }
        return grid;
    }
};