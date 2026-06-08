class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        queue<pair<int,int>> q;
        int k = image[sr][sc];
        q.push({sr,sc});
        image[sr][sc] = color;
        while(!q.empty()){
            int i=q.front().first,j=q.front().second;
            q.pop();
            if(i>0 and image[i-1][j]==k and image[i-1][j]!=color){
                q.push({i-1,j});
                image[i-1][j] = color;
            }if(i<image.size()-1 and image[i+1][j]==k and image[i+1][j]!=color){
                q.push({i+1,j});
                image[i+1][j] = color;
            }if(j>0 and image[i][j-1]==k and image[i][j-1]!=color){
                q.push({i,j-1});
                image[i][j-1] = color;
            }if(j<image[0].size()-1 and image[i][j+1]==k and image[i][j+1]!=color){
                q.push({i,j+1});
                image[i][j+1] = color;
            }
        }
        return image;

    }
};