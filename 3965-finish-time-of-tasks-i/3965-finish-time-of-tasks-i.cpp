class Solution {
public:
long long dfs(int node, vector<vector<int>>& adj, vector<int>& baseTime){
    if(adj[node].size()==0) return baseTime[node];
    long long maxi = LLONG_MIN, mini = LLONG_MAX;
    for(int i=0;i<adj[node].size();i++){
        long long r = dfs(adj[node][i],adj,baseTime);
        maxi = max(maxi,r);
        mini = min(mini,r);
    }
    return (maxi-mini) + baseTime[node] + maxi;
}
    long long finishTime(int n, vector<vector<int>>& edges, vector<int>& baseTime) {
        vector<vector<int>> adj(n);
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
        }
        for(int i=0;i<adj.size();i++){
            cout<<i<<": ";
            for(int j=0;j<adj[i].size();j++){
                cout<<adj[i][j]<<" ";
            }cout<<endl;
        }
        long long res = dfs(0,adj,baseTime);
        return res;
    }
};