class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        if(need1==0 and need2==0) return 0;
        if(cost1+cost2<=costBoth) return ((long long)need1*cost1)+((long long)need2*cost2);
        if(need1==need2) return ((long long)need1*costBoth);
        if(need1<need2){
            long long res = (long long)need1*costBoth;
            long long rem = need2-need1;
            res+=((long long)rem*min(cost2,costBoth));
            return res;
        }
        long long res = (long long)need2*costBoth;
        long long rem = need1-need2;
        res += ((long long)rem*min(cost1,costBoth));
        return res;
    }
};