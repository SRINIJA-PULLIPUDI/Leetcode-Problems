class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        map<int,int> mp;
        vector<int> res;
        for(int i=0;i<bulbs.size();i++){
            mp[bulbs[i]]++;
        }
        for(auto i:mp){
            if(i.second%2!=0){
                res.push_back(i.first);
            }
        }return res;
    }
};