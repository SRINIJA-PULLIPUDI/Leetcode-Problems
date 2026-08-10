#include <bits/stdc++.h>
using namespace std;
class DisjointSet{
  public:
        vector<int> rank, size, parent;
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
    int removeStones(vector<vector<int>>& stones) {
        int row =0, col = 0;
        for(int i=0;i<stones.size();i++){
            row = max(row, stones[i][0]);
            col = max(col, stones[i][1]);
        }
        DisjointSet dj(row+col+1);
        map<int,int> mp;
        for(int i=0;i<stones.size();i++){
            dj.unionByRank(stones[i][0], stones[i][1]+row+1);
            mp[stones[i][0]] = 1;
            mp[stones[i][1]+row+1] = 1;
        }
        int res=0;
        for(auto i:mp){
            if(dj.findUltimateParent(i.first)==i.first) res++;
        }
        return stones.size() - res;
    }
};