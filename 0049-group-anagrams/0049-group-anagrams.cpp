class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;
        for(int i=0;i<strs.size();i++){
            string s = strs[i];
            sort(strs[i].begin(),strs[i].end());
            mp[strs[i]].push_back(s);
        }
        vector<vector<string>> res;
        for(auto i:mp){
            res.push_back(i.second);
        }
        return res;
    }
};