class Solution {
public:
    int vowels(string s){
        int c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u') c++;
        }
        return c;
    }
    string reverseWords(string s) {
        vector<string> a;
        string s1 = "";
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                s1+=s[i];
            }else{
                a.push_back(s1);
                s1 = "";
            }
        }
        a.push_back(s1);
        int c=0;
        for(int i=0;i<a[0].size();i++){
            if(a[0][i]=='a' or a[0][i]=='e' or a[0][i]=='i' or a[0][i]=='o' or 
            a[0][i]=='u' )  c++;
        }
        for(int i=1;i<a.size();i++){
            if(vowels(a[i])==c){
                string s2 = a[i];
                reverse(s2.begin(),s2.end());
                a[i] = s2;
            }
        }
        string res = "";
        for(int i=0;i<a.size();i++){
            if(i!=a.size()-1) res+= a[i]+" ";
            else if(i==a.size()-1) res+=a[i];
        }
        return res;
    }
};