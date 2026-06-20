class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> res;
        for(int i=0;i<m-1;i++){
            string r="";
            for(int j=0;j<n;j++){
                if(j==0) r+='.';
                else r+='#';
            }
            res.push_back(r);
        }
        string r = "";
        for(int i=0;i<n;i++){
            r+='.';
        }res.push_back(r);
        return res;
    }
};