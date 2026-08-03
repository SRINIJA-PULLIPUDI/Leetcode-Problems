class Solution {
public:
    void letterpermutation(int i, string s, vector<string>& res){
        if(i==s.size()){
            res.push_back(s);
            return;
        }
        if((s[i]>='a' and s[i]<='z') or (s[i]>='A' and s[i]<='Z')){
            s[i] = toupper(s[i]);
            letterpermutation(i+1, s, res);
            s[i] = tolower(s[i]);
            letterpermutation(i+1, s, res);
        }else{
            letterpermutation(i+1, s, res);
        }
        
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> res;
        letterpermutation(0, s, res);
        return res;
    }
};