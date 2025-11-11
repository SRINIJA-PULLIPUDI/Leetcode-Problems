class Solution {
public:
    int countGoodSubstrings(string s) {
        map<int,int> mp;
        int res=0;
        for(int i=0;i<3;i++){
            mp[s[i]]++;
        }
        if(mp.size()==3) res++;
        int i=0,j=3;
        while(j<s.size()){
            mp[s[j]]++;
            mp[s[i]]--;
            if(mp[s[i]]==0) mp.erase(s[i]);
            if(mp.size()==3) res++;
            i++;
            j++;
        }
        return res;

    }
};