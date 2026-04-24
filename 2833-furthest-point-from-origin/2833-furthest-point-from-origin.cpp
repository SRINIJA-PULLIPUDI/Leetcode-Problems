class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int maxi = INT_MIN,l=0,r=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='L') l++;
            else if(moves[i]=='R') r++;
        }
        if(l==0 and r==0) return moves.size();
        if(l>r){
            int c=0;
            for(int i=0;i<moves.size();i++){
                if(moves[i]=='L' or moves[i]=='_'){
                    c--;
                }else c++;
            }
            return abs(c-0);
        }else if(l==r){
            int c=0;
            for(int i=0;i<moves.size();i++){
                if(moves[i]=='L' or moves[i]=='_'){
                    c--;
                }else c++;
            }
            maxi = max(maxi,abs(c-0));
            c=0;
            for(int i=0;i<moves.size();i++){
                if(moves[i]=='R' or moves[i]=='_'){
                    c++;
                }else c--;
            }
            maxi = max(maxi,abs(c-0));
            return maxi;
        }else{
            int c=0;
            for(int i=0;i<moves.size();i++){
                if(moves[i]=='R' or moves[i]=='_'){
                    c++;
                }else c--;
            }
            return abs(c-0);
        }
        return maxi;
    }
};