class Solution {
public:
    int trailingZeroes(int n) {
        int c = 5, res=0;
        while(n>=c){
            int x = n/c;
            res+=x; 
            c*=5;
        }
        return res;
    }
};