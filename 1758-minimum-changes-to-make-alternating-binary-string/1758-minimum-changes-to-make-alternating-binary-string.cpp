class Solution {
public:
    int minOperations(string s) {
        int z=0,o=0;
        for(int i=0;i<s.size();i++){
            if(i%2==0){
                if(s[i]=='1') z++;
                else o++;
            }else{
                if(s[i]=='0') z++;
                else o++;
            }
        }return min(z,o);
    }
};