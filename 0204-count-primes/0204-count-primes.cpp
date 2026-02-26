class Solution {
public:
    int countPrimes(int n) {
        if(n==0) return 0;
        vector<int> a(n+1,1);
        int res=0;
        a[0] = 0;
        a[1] = 0;
        for(int i=2;i<n;i++){
            if(a[i]){
                res++;
                int j=i;
                while((j)<n){
                    a[j]=0;
                    j+=i;
                }
            }
        }
        return res;
    }
};