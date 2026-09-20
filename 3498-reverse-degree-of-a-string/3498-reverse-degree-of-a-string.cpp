class Solution {
public:
    int reverseDegree(string s) {
        int res=0;
        for(int i=0;i<s.size();i++){
            int k = s[i]-'a'+1;
            int l = 27-k;
            res += (l*(i+1));
        }return res;
    }
};