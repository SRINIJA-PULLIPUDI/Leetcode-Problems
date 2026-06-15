class Solution {
public:
bool dfs(int node, vector<vector<int>>& graph, vector<int>& color){
    for(int i=0;i<graph[node].size();i++){
        if(color[graph[node][i]]==-1){
            if(color[node]==1) color[graph[node][i]]=0;
            else color[graph[node][i]]=1;
            bool r = dfs(graph[node][i],graph,color);
            if(r==false) return false;
        }else{
            if(color[graph[node][i]]==color[node])
            return false;
        }
    }return true;
}
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int> color(graph.size(),-1);
        for(int i=0;i<color.size();i++){
            if(color[i]==-1){
                color[i]=0;
                bool r = dfs(i,graph,color);
                if(r==false) return false;
            }
        }return true;
    }
};