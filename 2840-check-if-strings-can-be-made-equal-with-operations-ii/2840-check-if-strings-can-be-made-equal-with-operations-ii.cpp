class Solution {
public:
    bool checkStrings(string s1, string s2) {
        string s1odd="",s1even="",s2odd="",s2even="";
        for(int i=0;i<s1.size();i++){
            if(i%2==0){
                s1even+=s1[i];
                s2even+=s2[i];
            }else{
                s1odd+=s1[i];
                s2odd+=s2[i];
            }
        }
        sort(s1even.begin(),s1even.end());
        sort(s1odd.begin(),s1odd.end());
        sort(s2even.begin(),s2even.end());
        sort(s2odd.begin(),s2odd.end());
        if(s1even==s2even and s1odd==s2odd) return true;
        return false;
    }
};