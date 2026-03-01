class Solution {
public:
long long mod = 1e9+7;
string decToBinary(int n) { 
    int len = (int)(log2(n));
    return bitset<64>(n).to_string().substr(64 - len - 1);
}
    int concatenatedBinary(int n) {
        string res = "";
        unsigned long long k=1;
        unsigned long long r=0;
        for(int i=n;i>=1;i--){
            res=(decToBinary(i));
            for(int j=res.size()-1;j>=0;j--){
                if(res[j]=='1'){
                    unsigned long long l = 1;
                    r+=(k);
                    r%=mod;
                }
                k*=2;
                k%=mod;
            }
        }
        return r;
    }
};