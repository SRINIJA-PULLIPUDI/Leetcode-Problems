class Solution {
public:
    int mirrorFrequency(string s) {
        map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int res=0;
        for(char i='0';i<='4';i++){
            res+=abs(mp[i]-mp[('9'-(i-'0'))]);
        }
        for(char i='a';i<='m';i++){
            res+=abs(mp[i]-mp[('z'-(i-'a'))]);
        }
        return res;
    }
};