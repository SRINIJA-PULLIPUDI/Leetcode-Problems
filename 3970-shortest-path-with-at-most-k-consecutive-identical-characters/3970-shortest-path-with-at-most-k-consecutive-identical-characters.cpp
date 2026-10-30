class Solution {
public:
    int shortestPath(int n, vector<vector<int>>& edges, string labels, int k) {
        vector<vector<pair<int,int>>> adj(n);
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back({edges[i][1],edges[i][2]});
        }
        vector<int> dist(n, k+1);
        priority_queue<pair<int, pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> pq;
        pq.push({0,{1,0}});
        while(!pq.empty()){
            int wt = pq.top().first, r = pq.top().second.first, node = pq.top().second.second;
            pq.pop();
            if(r>=dist[node]) continue;
            if(node == n-1) return wt;
            dist[node] = r;
            for(int i=0;i<adj[node].size();i++){
                int x=1;
                if(labels[node]==labels[adj[node][i].first]) x=r+1;
                if(x<dist[adj[node][i].first]) pq.push({wt+adj[node][i].second, {x, adj[node][i].first}});
            }
        }return -1;
    }
};