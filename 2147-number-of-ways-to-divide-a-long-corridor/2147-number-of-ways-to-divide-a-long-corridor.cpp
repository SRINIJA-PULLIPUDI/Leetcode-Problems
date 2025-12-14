class Solution {
public:
    int numberOfWays(string corridor) {
        long long c=0;
        long long mod = 1e9 + 7;
        for(long long i=0;i<corridor.size();i++){
            if(corridor[i]=='S') c++;
        }if(c%2!=0 or c<2) return 0;
        if(c==2) return 1;
        long long k=0,p=0,res=1;
        for(long long i=0;i<corridor.size();i++){
            if(corridor[i]=='S' and k<=1) {
                k++;
            }else if(corridor[i]=='P' and k<=1){
                continue;
            }else if(corridor[i]=='P' and k==2){
                p++;
            }else if(corridor[i]=='S' and k==2){
                res*=(p+1);
                res%=mod;
                p=0;
                k = 1;
            }
        }
        return res;
    }
};