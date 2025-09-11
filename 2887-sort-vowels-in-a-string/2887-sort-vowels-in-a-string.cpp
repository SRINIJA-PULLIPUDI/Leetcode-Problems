class Solution {
public:
    string sortVowels(string s) {
        vector<int> a;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' or 
            s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U'){
                a.push_back(s[i]);
            }
        }
        sort(a.begin(), a.end());
        int c = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' or 
            s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U'){
                s[i] = a[c];
                c++;
            }
        }
        return s;
    }
};