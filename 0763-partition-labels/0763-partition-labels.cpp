class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> res;
        map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]] = i;
        }
        int i=0,j=0,k=0;
        while(k<s.size()){
            if(mp[s[k]]>j) j = mp[s[k]];
            if(k==j){
                res.push_back(j-i+1);
                i = k+1;
            }
            k++;
        }
        return res;
    }
};