class Solution {
public:
int binS(vector<int>& potions, long long spell, long long success){
    int low=0, high=potions.size()-1;
    int s = -1;
    while(low<=high){
        int mid = low + (high-low) /2;
        if(potions[mid]*spell*1LL >= success){
            s = mid;
            high = mid-1;
        }else low = mid+1;
    }
    return s;
}
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> res;
        sort(potions.begin(), potions.end());
        for(int i=0;i<spells.size();i++){
            long long r = binS(potions,spells[i],success);
            if(r==-1) res.push_back(0);
            else res.push_back(potions.size()-r);
        }
        return res;
    }
};