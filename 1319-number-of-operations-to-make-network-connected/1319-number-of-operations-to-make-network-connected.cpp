class DisjointSet{
  vector<int> rank, size, parent;
  public:
        DisjointSet(int n){
            rank.resize(n+1,0);
            parent.resize(n+1);
            size.resize(n+1);
            for(int i=0;i<=n;i++){
              parent[i] = i;
            }
            for(int i=0;i<=n;i++){
                size[i] = 1;
            }
        }
        int findUltimateParent(int node){
            if(node == parent[node]) return node;
            return parent[node] = findUltimateParent(parent[node]);
        }
        void unionByRank(int u, int v){
            int uParU = findUltimateParent(u);
            int uParV = findUltimateParent(v);
            if(uParU == uParV) return;
            if(rank[uParU] < rank[uParV]){
                parent[uParU] = uParV;
            }
            else if(rank[uParU] == rank[uParV]){
                parent[uParV] = uParU;
                rank[uParU] += 1;
            }else{
                parent[uParV] = uParU;
            }
        }
        void unionBySize(int u, int v){
            int uParU = findUltimateParent(u);
            int uParV = findUltimateParent(v);
            if(uParU==uParV) return;
            if(size[uParU] <= size[uParV]){
                parent[uParU] = uParV;
                size[uParV] += size[uParU];
            }else{
                parent[uParV] = uParU;
                size[uParU] += size[uParV];
            }
        }
};

class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        DisjointSet dj(n);
        int extra = 0;
        for(int i=0;i<connections.size();i++){
            if(dj.findUltimateParent(connections[i][0]) == dj.findUltimateParent(connections[i][1])) extra++;
            dj.unionByRank(connections[i][0], connections[i][1]);
        }
        int res=-1;
        for(int i=0;i<n;i++){
            if(dj.findUltimateParent(i) == i) res++;
        }
        if(extra>=(res)) return res;
        return -1;
    }
};