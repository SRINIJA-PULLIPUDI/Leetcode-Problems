class Solution {
public:
    string trimTrailingVowels(string s) {
        int k = s.size()-1;
        while(k>=0){
            if(s[k]=='a' or s[k]=='e' or s[k]=='i' or s[k]=='o' or s[k]=='u'){
                k--;
            }else break;
        }
        string res="";
        for(int i=0;i<=k;i++){
            res+=s[i];
        }return res;
    }
};