class Solution {
public:
    int maxFreqSum(string s) {
        int c=0,v=0;
        map<int, int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(auto i:mp){
            if(i.first=='a' or i.first=='e' or i.first=='i' or i.first=='o' or i.first=='u'){
                v = max(v, i.second);
            }else c = max(c,i.second);
        }
        return v+c;
    }
};