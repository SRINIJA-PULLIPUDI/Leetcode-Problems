class Solution {
public:
vector<string> res;
    void generate(int i, int n, string s, int o, int c){
        if(s.size()==(2*n)){
            res.push_back(s);
        }
        if(o<n) {
            generate(i+1, n, s+"(", o+1, c);
        }
        if(c<o){
            generate(i+1, n, s+")", o, c+1);
        }
    }
    vector<string> generateParenthesis(int n) {
        generate(0, n, "", 0, 0);
        return res;
    }
};