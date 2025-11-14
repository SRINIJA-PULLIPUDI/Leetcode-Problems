class Solution {
public:
    int numberOfSubstrings(string s) {
        map<char,int> mp;
        int l=0,h=0,c=0;
        while(h<s.size()){
            mp[s[h]]+=1;
            while(mp.size()==3){
                mp[s[l]]-=1;
                if(mp[s[l]]==0){
                    mp.erase(s[l]);
                }
                c+=(s.size()-h);
                l+=1;
            }
            h+=1;
        }
        return c;
    }
};