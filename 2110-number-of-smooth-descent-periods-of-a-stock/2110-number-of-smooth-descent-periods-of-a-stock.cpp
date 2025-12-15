class Solution {
public:
    long long fact(long long n){
        return (n*(n+1))/2;
    }
    long long getDescentPeriods(vector<int>& prices) {
        long long k=1,res=0;
        for(long long i=1;i<prices.size();i++){
            if(prices[i]==(prices[i-1]-1)){
                k++;
            }else{
                if(k>1){
                    res+=(fact(k)-k);
                    k=1;
                }
            }
        }
        if(k>1){
            res+=(fact(k)-k);
        }
        return res+=prices.size();
    }
};