class Solution {
public:
    double power(double x, long long n){
        if(n==0) return 1;
        double l = power(x,n/2);
        if(n%2) {
            return x*(l*l);
        }
        return l*l;
    }
    double myPow(double x, int n) {
        if(x==0) return 0;
        long long N = n;
        if(N<0){
            x = 1/x;
            N = -N;
        }
        return power(x,N);
    }
};