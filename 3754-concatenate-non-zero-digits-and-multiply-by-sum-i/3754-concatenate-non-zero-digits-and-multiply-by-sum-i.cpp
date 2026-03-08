class Solution {
public:
#define ll long long
    long long sumAndMultiply(int n) {
        ll t=n,s=0,m=0,k=0;
        while(t!=0){
            if(t%10!=0){
                s+=(t%10);
                m+=(t%10)*(pow(10,k));
                k++;
            }
            t/=10;
        }return s*m;
    }
};