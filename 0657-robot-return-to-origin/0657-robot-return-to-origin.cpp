class Solution {
public:
    bool judgeCircle(string moves) {
        int u=0,d=0,r=0,l=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='U') u++;
            else if(moves[i]=='L') l++;
            else if(moves[i]=='R') r++;
            else d++;
        }
        if(d==u and l==r) return true;
        return false;
    }
};