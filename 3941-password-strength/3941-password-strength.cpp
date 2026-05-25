class Solution {
public:
    int passwordStrength(string password) {
        set<int> st;
        int res=0;
        for(int i=0;i<password.size();i++){
            st.insert(password[i]);
        }
        for(auto i:st){
            if(i>='a' and i<='z'){
                res+=1;
            }else if(i>='A' and i<='Z'){
                res+=2;
            }else if(i>='0' and i<='9'){
                res+=3;
            }else res+=5;
        }
        return res;
    }
};