class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        long long res=INT_MAX;
        vector<vector<pair<int,int>>> adj(n+1);
        for(int i=0;i<roads.size();i++){
            adj[roads[i][0]].push_back({roads[i][1], roads[i][2]});
            adj[roads[i][1]].push_back({roads[i][0], roads[i][2]});
        }
        vector<long long> vis(n+1,0);
        queue<int> q;
        q.push(1);
        vis[1] = 1;
        while(!q.empty()){
            long long node = q.front();
            q.pop();
            for(int i=0;i<adj[node].size();i++){
                if(!vis[adj[node][i].first]){
                    q.push(adj[node][i].first);
                    vis[adj[node][i].first] = 1;
                }
                res = min(res,(long long)adj[node][i].second);
            }
        }
        return res;
    }
};