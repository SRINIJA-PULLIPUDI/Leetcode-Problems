class Solution {
public:
unordered_map<string,int> mp;
vector<vector<string>> res;
    void dfs(string word, vector<string>& ans, string beginWord){
        if(word == beginWord) {
            reverse(ans.begin(), ans.end());
            res.push_back(ans);
            reverse(ans.begin(), ans.end());
            return;
        }
        for(int i=0;i<word.size();i++){
            string k = word;
            for(int j=0;j<26;j++){
                k[i] = 'a'+j;
                if(mp.find(k)!=mp.end() and mp[k]+1 == mp[word]){
                    ans.push_back(k);
                    dfs(k, ans, beginWord);
                    ans.pop_back();
                }
            }
        }
    }
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        set<string> s;
        for(int i=0;i<wordList.size();i++){
            if(wordList[i]!=beginWord) s.insert(wordList[i]);
        }
        queue<string> q;
        mp[beginWord] = 1;
        q.push(beginWord);
        while(!q.empty()){
            string k = q.front();
            q.pop();
            for(int i=0;i<k.size();i++){
                string l = k;
                for(int j=0;j<26;j++){
                    l[i] = 'a'+j;
                    if(s.find(l)!=s.end()){
                        mp[l] = mp[k]+1;
                        q.push(l);
                        s.erase(l);
                    }
                }
            }
        }
        if(mp.count(endWord)){
            vector<string> ans;
            ans.push_back(endWord);
            dfs(endWord, ans, beginWord);
        }
        return res;
    }
};