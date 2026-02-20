#define ll long long
class Solution {
public:
ll mod = 1e9+7;
// lcm = a*b/__gcd(a,b)
    int nthMagicalNumber(int n, int a, int b) {
        ll x = min(a,b);
        ll l = x;
        ll r=(n*(x*1ll));
        while((r-l)>1){
            ll mid = l+(r-l)/2;
            ll lcm = ((1ll*a)*b)/__gcd(a,b);
            ll i=(mid/a),j=(mid/b),k=(mid/lcm);
            if((i+j-k)<n) l=mid;else r=mid;
        }
        return r%mod;
    }
};