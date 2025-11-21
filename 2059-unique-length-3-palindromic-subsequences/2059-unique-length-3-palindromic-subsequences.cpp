class Solution {
public:
    int countPalindromicSubsequence(string s1) {
        map<char,vector<int>> mp;
        map<char,int> vis;
        set<string> st;
        int res=0;
        for(int i=0;i<s1.size();i++){
            vis[s1[i]]++;
        }
        for(auto i:vis){
            if(i.second>=3) res++;
        }
        string s="";
        for(int i=0;i<s1.size();i++){
            if(i==0) s+=s1[i];
            else if(s1[i]!=s[s.size()-1]) s+=s1[i];
        }
        for(int i=0;i<s.size();i++){
            if(mp[s[i]].size()==0){
                mp[s[i]].push_back(1);
            }
            else mp[s[i]][0] = mp[s[i]][0]+1;
            if(mp[s[i]][0]>=2 and mp[s[i]].size()==2){
                for(int j=mp[s[i]][1]+1;j<i;j++){
                    string temp = "";
                    temp+=s[i];
                    temp+=s[j];
                    temp+=s[i];
                    if(st.find(temp)==st.end()){
                        res++;
                        st.insert(temp);
                    }
                }
            }
            if(mp[s[i]].size()==2) mp[s[i]][1] = i;
            else mp[s[i]].push_back(i);
            
        }
        return res;
    }
};