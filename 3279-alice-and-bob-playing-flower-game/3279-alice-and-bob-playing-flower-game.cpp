class Solution {
public:
    long long flowerGame(int n, int m) {
        long long no, ne, mo, me;
        ne = n/2;
        me = m/2;
        no = n/2;
        mo = m/2;
        if(n%2==1) no++;
        if(m%2==1) mo++;
        return (ne*mo) + (no*me);
    }
};