class Solution {
public:
    int countTriples(int n) {
        int res=0;
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                float x = sqrt((i*i)+(j*j));
                if(ceil(x)==floor(x) and x<=n){
                    res++;
                }
            }
        }
        return res*2;
    }
};