class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        string s="";
        while(n!=0){
            if(n%2!=0) s+='0';
            else s+='1';
            n/=2;
        }
        reverse(s.begin(),s.end());
        int res= stoi(s,0,2);
        return res;
    }
};