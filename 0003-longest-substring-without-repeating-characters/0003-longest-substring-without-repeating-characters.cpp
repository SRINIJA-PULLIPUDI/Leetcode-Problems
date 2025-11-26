class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s=="") return 0;
        map<char,int> mp;
        int i=0,j=0;
        int res=INT_MIN;
        while(j<s.size()){
            if(mp[s[j]]==0){
                mp[s[j]]++;
                res = max(res,j-i+1);
                j++;
            }else{
                while(mp[s[j]]>0){
                    mp[s[i]]--;
                    i++;
                }
            }
        }
        return res;
    }
};