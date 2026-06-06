class Solution {
public:
    void dfs(vector<int>& vis, vector<vector<int>>& isConnected, int n){
        for(int i=0;i<isConnected.size();i++){
            if(isConnected[n][i]==1 and !vis[i]){
                vis[i] = 1;
                dfs(vis, isConnected, i);
            }
        }
        return;
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<int> vis(isConnected.size(),0);
        int res=0;
        for(int i=0;i<vis.size();i++){
            if(!vis[i]){
                vis[i] = 1;
                res++;
                dfs(vis,isConnected,i);
            }
        }return res;
    }
};