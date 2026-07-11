class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        int res=0;
        vector<vector<int>> adj(n);
        vector<int> vis(n,0);
        vector<vector<int>> eVis(n,vector<int>(n,0));
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        for(int i=0;i<n;i++){
            if(!vis[i]){
                queue<int> q;
                q.push(i);
                vis[i] = 1;
                int vertex = 1,edges = 0;
                while(!q.empty()){
                    int node = q.front();
                    q.pop();
                    for(int j=0;j<adj[node].size();j++){
                        if(!vis[adj[node][j]]){
                            q.push(adj[node][j]);
                            vis[adj[node][j]]=1;
                            vertex++;
                        }
                        if(!eVis[node][adj[node][j]]){
                            eVis[node][adj[node][j]] = 1;
                            eVis[adj[node][j]][node] = 1;
                            edges++;
                        }
                    }
                }
                if(edges == (vertex*(vertex-1))/2 ) res++;
            }
        }return res;
    }
};