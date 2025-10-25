class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n = piles.size()/3;
        sort(piles.begin(),piles.end());
        int s = 0;
        while(piles.size()>n){
            piles.pop_back();
            s+=piles[piles.size()-1];
            piles.pop_back();
        }
        return s;
    }
};