class Solution {
public:
    int maximumValue(vector<string>& strs) {
     int m=0;
     for(int i=0;i<strs.size();i++){
        string s = strs[i];
        int f=0;
        for(int j=0;j<s.size();j++){
            if((int)s[j]>=97 and (int)s[j]<=122){
                f = 1;
                break;
            }
        }
        if(f==1){
            m = max(m,(int)s.size());
        }
        else{
            m=max(m,(stoi(s)));
        }
     } 
     return m;
    }
};