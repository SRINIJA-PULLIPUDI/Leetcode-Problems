class Solution {
public:
#define ll long long
    ll mod = 1e9 + 7;
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int,int>>> adj(n);
        vector<ll> dist(n,LLONG_MAX);
        vector<ll> count(n,0);
        for(int i=0;i<roads.size();i++){
            adj[roads[i][0]].push_back({roads[i][1], roads[i][2]});
            adj[roads[i][1]].push_back({roads[i][0], roads[i][2]});
        }
        dist[0] = 0;
        count[0] = 1;
        priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;
        pq.push({0,0});
        while(!pq.empty()){
            ll wt = pq.top().first, node = pq.top().second;
            pq.pop();
            for(int i=0;i<adj[node].size();i++){
                if(wt + adj[node][i].second < dist[adj[node][i].first]){
                    dist[adj[node][i].first] = wt + adj[node][i].second;
                    count[adj[node][i].first] = (count[node])%mod;
                    pq.push({dist[adj[node][i].first], adj[node][i].first});
                }else if(wt + adj[node][i].second == dist[adj[node][i].first]){
                    count[adj[node][i].first] += (count[node]);
                    count[adj[node][i].first] %= mod;
                }
            }
        }return count[n-1];
    }
};