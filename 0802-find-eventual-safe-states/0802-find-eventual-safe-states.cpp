class Solution {
public:
bool dfs(int node, vector<int>& vis, vector<int>& path, vector<vector<int>>& graph,vector<int>& res){
    for(int i=0;i<graph[node].size();i++){
        if(vis[graph[node][i]]==0){
            vis[graph[node][i]]=1;
            path[graph[node][i]]=1;
            bool r = dfs(graph[node][i],vis,path,graph,res);
            if(r==false) return false;
        }else{
            if(path[graph[node][i]]==1) return false;
        }
        path[graph[node][i]]=0;
    }
    res.push_back(node);
    return true;
}
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int> vis(graph.size());
        vector<int> path(graph.size());
        vector<int> res;
        for(int i=0;i<vis.size();i++){
            if(vis[i]==0){
                vis[i]=1;
                path[i]=1;
                bool r = dfs(i,vis,path,graph,res);
                if(r==true) path[i]=0;
            }
        }sort(res.begin(),res.end());
        return res;
    }
};