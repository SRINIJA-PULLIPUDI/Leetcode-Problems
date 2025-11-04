class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int, int> mp;
        for(int i=0;i<deck.size();i++){
            mp[deck[i]]+=1;
        }
        int g = mp[deck[0]];
        for(auto i:mp){
            g = gcd(g,i.second);
            if(g==1) return false;
        }
        return true;
    }
};