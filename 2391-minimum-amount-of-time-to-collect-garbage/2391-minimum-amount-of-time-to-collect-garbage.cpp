class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        map<int,vector<int>> mp;
        int p=-1,g=-1,m=-1;
        for(int i=0;i<garbage.size();i++){
            mp[i].push_back(0);
            mp[i].push_back(0);
            mp[i].push_back(0);
            for(int j=0;j<garbage[i].size();j++){
                if(garbage[i][j]=='M') {
                    m = i;
                    mp[i][0]++;
                }else if(garbage[i][j]=='P'){
                    p = i;
                    mp[i][1]++;
                }else{
                    g = i;
                    mp[i][2]++;
                }
            }
        }
        int res=0;
        if(m!=-1){
            int i=0;
            while(i<=m){
                res+=(mp[i][0]);
                if(i!=m) res+=travel[i];
                i++;
            }
        }
        if(p!=-1){
            int i=0;
            while(i<=p){
                res+=(mp[i][1]);
                if(i!=p) res+=travel[i];
                i++;
            }
        }
        if(g!=-1){
            int i=0;
            while(i<=g){
                res+=(mp[i][2]);
                if(i!=g) res+=travel[i];
                i++;
            }
        }
        return res;
    }
};