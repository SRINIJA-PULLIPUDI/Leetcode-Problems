class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0,prod=1;
        int k=n;
        while(n!=0){
            int r = n%10;
            sum+=r;
            prod*=r;
            n/=10;
        }
        cout<<sum<<endl<<prod;
        if(k%(sum+prod)==0) return true;
        return false;
    }
};