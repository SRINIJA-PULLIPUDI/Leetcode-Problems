class Solution {
public:
    string frequencySort(string s) {
        map<char, int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        map<int, vector<char> > m;
        for(auto i:mp){
            m[i.second].push_back(i.first);
        }
        string rs = "";
        for(auto i:m){
            for(int j=0;j<i.second.size();j++){
                for(int k=0;k<i.first;k++){
                    rs+=i.second[j];
                }
            }
        }
        reverse(rs.begin(), rs.end());
        return rs;
    }
};