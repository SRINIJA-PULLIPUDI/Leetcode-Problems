class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<string> s;
        vector<int> res;
        for(int i=1;i<=n;i++){
            string x = to_string(i);
            s.push_back(x);
        }
        sort(s.begin(),s.end());
        for(int i=0;i<s.size();i++){
            res.push_back(stoi(s[i]));
        }
        return res;
    }
};