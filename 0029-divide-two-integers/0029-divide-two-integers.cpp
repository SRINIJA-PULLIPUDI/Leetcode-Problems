class Solution {
public:
    int divide(int dividend, int divisor) {
       if(dividend==divisor) return 1;
       if(dividend > 0 and divisor==(-1)) return (dividend*(-1));
       if(dividend == INT_MIN and divisor == -1) return INT_MAX;
       if(dividend == INT_MAX and divisor == -1) return INT_MIN;
       if(dividend == INT_MIN and divisor == 1) return INT_MIN;
       if(dividend == INT_MAX and divisor == 1) return INT_MAX;
       int f=0;
       if((dividend<0 and divisor>0) or (dividend>0 and divisor<0)){
        f = 1;
       }
       long s = 0;
       long d = abs((long)dividend);
       long div = abs((long)divisor);
       while(div<=d){
        long c=0;
        while(div<<(c+1) <= d){
            c++;
        }
        s+=(long) (1<<c);
        d-=(div*(1<<c));
       }
       if(s>INT_MAX) return INT_MAX;
       if(s<INT_MIN) return INT_MIN;
       
       if(f==1) return s*(-1);
       return s;
    }
};