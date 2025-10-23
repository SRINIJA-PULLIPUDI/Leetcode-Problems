class Solution {
public:
string fun(string s){
    if(s.size()==2) return s;
    string s1 = "";
    for(int i=0;i<s.size()-1;i++){
        int a = s[i]-'0';
        int b = s[i+1]-'0';
        s1+=(((a+b)%10)+'0');
    }
    return fun(s1);
}
    bool hasSameDigits(string s) {
        string res = fun(s);
        if(res[0]==res[1]) return true;
        return false;
    }
};