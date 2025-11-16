class Solution {
public:
    int numSub(string s) {
        long long mod = 1e9 + 7;
        long long res=0;
        long long o=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') o++;
            else{
                res+= ((o*(o+1))/2)%mod;
                o=0;
            }
        }
        res += ((o*(o+1))/2)%mod;
        return (int)res;
    }
};