class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        vector<int> adj(n);
        for(int i=1;i<n;i++){
            if(nums[i]-nums[i-1] > maxDiff) adj[i] = adj[i-1]+1;
            else adj[i] = adj[i-1];
        }
        vector<bool> res(queries.size(), false);
        for(int i=0;i<queries.size();i++){
            if(adj[queries[i][0]] == adj[queries[i][1]]){
                res[i] = true;
            }
        }return res;
    }
};