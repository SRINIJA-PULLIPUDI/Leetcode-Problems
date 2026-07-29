class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> v(26,0);
        for(int i=0;i<s.size();i++){
            v[s[i]-'a']++;
        }
        int k =  -1;
        string res = "";
        for(int i=0;i<26;i++){
            if(v[i]%2 and k==-1) {
                k=i;
            }
            for(int j=0;j<(v[i]/2);j++){
                res+= (i+'a');
            }
        }
        string r = res;
        reverse(r.begin(),r.end());
        if(k!=-1){
            res+=(k+'a');
        }
        res+=r;
        return res;
    }
};