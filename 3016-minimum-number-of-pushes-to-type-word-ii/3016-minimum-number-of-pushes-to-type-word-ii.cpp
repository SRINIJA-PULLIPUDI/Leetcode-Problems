class Solution {
public:
    int minimumPushes(string word) {
        map<char,int> mp;
        for(int i=0;i<word.size();i++){
            mp[word[i]]++;
        }
        int c=1,k=0,res=0;
        vector<int> v;
        for(auto i:mp){
            v.push_back(i.second);
        }
        sort(v.rbegin(),v.rend());
        for(int i=0;i<v.size();i++){
            k++;
            res+=(c*v[i]);
            if(k==8) {
                c++;
                k=0;
            }
        }
        return res;
    }
};