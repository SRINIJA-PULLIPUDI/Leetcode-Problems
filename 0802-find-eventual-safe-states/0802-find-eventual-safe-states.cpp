class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<vector<int>> adj(graph.size());
        vector<int> indegree(graph.size());
        for(int i=0;i<graph.size();i++){
            for(int j=0;j<graph[i].size();j++){
                adj[graph[i][j]].push_back(i);
            }
        }for(int i=0;i<adj.size();i++){
            for(int j=0;j<adj[i].size();j++){
                indegree[adj[i][j]]++;
            }
        }queue<int> q;
        for(int i=0;i<indegree.size();i++){
            if(indegree[i]==0) q.push(i);
        }vector<int> res;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            res.push_back(node);
            for(int i=0;i<adj[node].size();i++){
                indegree[adj[node][i]]--;
                if(indegree[adj[node][i]]==0) q.push(adj[node][i]);
            }
        }sort(res.begin(),res.end());
        return res;
    }
};