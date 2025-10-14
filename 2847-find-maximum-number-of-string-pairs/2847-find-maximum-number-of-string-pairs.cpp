class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int c=0;
        map<string,int> mp;
        for(int i=0;i<words.size();i++){
            string s=words[i];
            reverse(s.begin(), s.end());
            if(mp[s]) c++;
            else mp[words[i]]++;
        }
        return c;
    }
};