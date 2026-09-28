class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0,j=0,maxi=0,res=0;
        unordered_map<int,int> mp;
        while(j<s.size()){
            mp[s[j]]++;
            maxi = max(maxi, mp[s[j]]);
            while((j-i+1 - maxi)>k){
                mp[s[i]]--;
                i++;
            }
            res = max(res, j-i+1);
            j++;
        }return res;
    }
};
