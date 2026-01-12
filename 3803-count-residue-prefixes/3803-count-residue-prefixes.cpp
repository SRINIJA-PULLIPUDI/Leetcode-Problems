class Solution {
public:
    int residuePrefixes(string s) {
        map<int,int> mp;
        int res=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            if(((i+1)%3)== mp.size()) res++;
        }
        return res;
    }
};