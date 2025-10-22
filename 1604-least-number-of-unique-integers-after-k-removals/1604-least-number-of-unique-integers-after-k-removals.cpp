class Solution {
public:
// int comp(const pair<int,int> &a, const pair<int,int> &b){
//     return a.second<b.second;
// }
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        vector<pair<int,int>> p;
        for(auto i:mp){
            p.push_back({i.first,i.second});
        }
        
        sort(p.begin(), p.end(), [](const pair<int,int> &a, const pair<int,int> &b){
            return a.second<b.second;
        });
        for(int i=0;i<p.size();i++){
            cout<<p[i].second<<" ";
        }
        for(int i=0;i<p.size();i++){
            if(k>=p[i].second and k>=1) {
                k-=p[i].second;
                p[i].second=0;
            }else break;
        }
        int s=0;
        for(int i=0;i<p.size();i++){
            if(p[i].second>0) s++;
        }
        return s;
    }
};