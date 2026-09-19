class Solution {
public:
    int countRotations(string s, int k) {
        string r = s+s;
        int c=0,res=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]) c++;
        }
        if(c==k) res++;
        for(int i=1;i<s.size();i++){
            if(r[i-1]==r[i]) c--;
            if(r[i+s.size()-2]==r[i+s.size()-1]) c++;
            if(c==k) res++;
        }
        return res;
    }
};