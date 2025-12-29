class Solution {
public:
    int minAllOneMultiple(int k) {
        if(k%2==0) return -1;
        if(k%5==0) return -1;
        long long n = 1,res=1;
        long long x = LLONG_MAX;
        while(n<=x){
            if((n%k)==0) return res;
            n=((n*10)+1);
            n %= k;
            res++;
        }
        if(n%k==0) cout<<(res);
        return -1;
    }
};