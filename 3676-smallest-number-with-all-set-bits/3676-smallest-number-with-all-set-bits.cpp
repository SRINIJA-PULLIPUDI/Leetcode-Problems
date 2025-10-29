class Solution {
public:
    int smallestNumber(int n) {
        while(1){
            if(((n+1)&n)==0) return n;
            n++;
        }
    }
};