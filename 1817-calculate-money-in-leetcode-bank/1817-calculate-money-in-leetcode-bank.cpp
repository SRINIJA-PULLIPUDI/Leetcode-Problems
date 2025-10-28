class Solution {
public:
    int totalMoney(int n) {
        int x = n/7;
        int y = x*28+((x*7*(x-1))/2);
        int m = n%7;
        if(n<7) return ((m*(2*x+m+1))/2);
        return y+((m*(2*x+m+1))/2);
    }
};