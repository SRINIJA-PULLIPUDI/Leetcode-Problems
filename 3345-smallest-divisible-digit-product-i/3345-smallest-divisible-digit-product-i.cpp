class Solution {
public:
    int prod(int n){
        int k=1;
        while(n!=0){
            k*=(n%10);
            n/=10;
        }return k;
    }
    int smallestNumber(int n, int t) {
        while(prod(n)%t!=0){
            n++;
        }
        return n;
    }
};