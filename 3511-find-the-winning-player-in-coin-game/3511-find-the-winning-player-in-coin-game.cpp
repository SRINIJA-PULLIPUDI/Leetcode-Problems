class Solution {
public:
    string winningPlayer(int x, int y) {
        y/=4;
        int z = min(x,y);
        if(z%2==0) return "Bob";
        else return "Alice";
    }
};