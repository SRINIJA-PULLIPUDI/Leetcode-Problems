class Solution {
public:
    double angleClock(int hour, int minutes) {
        double k =  abs((30*hour)-(5.5*minutes));
        if(k>180) return 360-k;
        return k;
    }
};