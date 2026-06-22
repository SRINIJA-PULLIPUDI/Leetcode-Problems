class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string s = "balloon";
        map<char,int> mp;
        for(int i=0;i<text.size();i++){
            if(s.contains(text[i])) mp[text[i]]++;
        }
        for(auto i:mp){
            cout<<i.first<<" "<<i.second<<endl;
        }
        int res=0;
        while(true){
            int f=0;
            for(int i=0;i<s.size();i++){
                if(mp[s[i]]>0) mp[s[i]]--;
                else{
                    f=1;
                    break;
                }
            }
            if(f) break;
            res++;
        }
        return res;
    }
};