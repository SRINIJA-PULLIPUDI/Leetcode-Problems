class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        if((start[0]+start[1])%2==0 and (target[0]+target[1])%2==0) return true;
        if((start[0]+start[1])%2!=0 and (target[0]+target[1])%2!=0) return true;
        return false;
    }
};