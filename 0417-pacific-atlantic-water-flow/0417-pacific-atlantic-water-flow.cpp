class Solution {
public:
void paciAtlan(queue<pair<int,int>>& q, vector<vector<int>>& vis, vector<vector<int>>& heights){
    while(!q.empty()){
        int indI = q.front().first, indJ = q.front().second;
        q.pop();
        if(indI>0 and vis[indI-1][indJ]==0 and heights[indI-1][indJ]>=heights[indI][indJ]){
            vis[indI-1][indJ] = 1;
            q.push({indI-1,indJ});
        }
        if(indI<heights.size()-1 and vis[indI+1][indJ]==0 and heights[indI+1][indJ]>=heights[indI][indJ]){
            vis[indI+1][indJ] = 1;
            q.push({indI+1, indJ});
        }
        if(indJ>0 and vis[indI][indJ-1]==0 and heights[indI][indJ-1]>=heights[indI][indJ]){
            vis[indI][indJ-1] = 1;
            q.push({indI,indJ-1});
        }
        if(indJ<heights[0].size()-1 and vis[indI][indJ+1]==0 and heights[indI][indJ+1]>=heights[indI][indJ]){
            vis[indI][indJ+1] = 1;
            q.push({indI, indJ+1});
        }
    }
}
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        queue<pair<int,int>> q;
        vector<vector<int>> pVis(heights.size(), vector<int> (heights[0].size(),0));
        vector<vector<int>> aVis(heights.size(), vector<int> (heights[0].size(),0));
        for(int i=0;i<heights[0].size();i++){
            pVis[0][i] = 1;
            q.push({0,i});
        }
        for(int i=1;i<heights.size();i++){
            pVis[i][0] = 1;
            q.push({i,0});
        }
        paciAtlan(q, pVis,heights);
        for(int i=0;i<heights.size();i++){
            aVis[i][heights[0].size()-1] = 1;
            q.push({i, heights[0].size()-1});
        }
        for(int i=0;i<heights[0].size()-1;i++){
            aVis[heights.size()-1][i] = 1;
            q.push({heights.size()-1, i});
        }
        paciAtlan(q, aVis,heights);
        vector<vector<int>> res;
        for(int i=0;i<heights.size();i++){
            for(int j=0;j<heights[0].size();j++){
                if(aVis[i][j] and pVis[i][j]) res.push_back({i,j});
            }
        }return res;
    }
};