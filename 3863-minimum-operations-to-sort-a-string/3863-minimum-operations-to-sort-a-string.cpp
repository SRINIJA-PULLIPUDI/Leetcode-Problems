class Solution {
public:
    int minOperations(string s) {
        if(s.size()==1) return 0;
        char maxi,mini;
        int c=0;
        for(int i=0;i<s.size();i++){
            if(i!=s.size()-1 and s[i]>s[i+1]) c++;
            if(i==0){
                maxi=s[i];
                mini=s[i];
                continue;
            }
            if(s[i]<mini){
                mini = s[i];
            }else if(s[i]>=maxi){
                maxi = s[i];
            }
        }
        if(c==0) return 0;
        if(c==s.size()-1 and s.size()==2) return -1;
        if(c==s.size()-1 and s.size()==3) return 3;
        cout<<maxi<<" "<<mini;
        if(s[0]==mini or s[s.size()-1]==maxi) return 1;
        if(s[0]==maxi and s[s.size()-1]==mini){
            for(int i=1;i<s.size()-1;i++){
                if(s[i]==mini or s[i]==maxi) return 2;
            }
            return 3;
        }
        return 2;
    }
};