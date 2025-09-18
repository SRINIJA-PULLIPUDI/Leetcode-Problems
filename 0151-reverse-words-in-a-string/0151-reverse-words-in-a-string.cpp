class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        string res = "";
        string st = "";
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                st+=s[i];
            }else{
                if(!st.empty()){
                    reverse(st.begin(), st.end());
                    res+=st;
                    res+=" ";
                    st = "";
                }
            }
        }
        if(!st.empty()){
            reverse(st.begin(), st.end());
            res+=st;
            return res;
        }
        string r = "";
        for(int i=0;i<res.size()-1;i++){
            r+=res[i];
        }return r;
    }
};