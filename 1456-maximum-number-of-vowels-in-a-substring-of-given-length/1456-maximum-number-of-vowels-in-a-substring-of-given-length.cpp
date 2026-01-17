class Solution {
public:
    int maxVowels(string s, int k) {
        int curr=0,maxi=0;
        for(int i=0;i<k;i++){
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u'){
                curr++;
            }
        }
        maxi = max(maxi, curr);
        int j=k,i=0;
        while(j<s.size()){
            if(s[j]=='a' or s[j]=='e' or s[j]=='i' or s[j]=='o' or s[j]=='u'){
                curr++;
            }if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u'){
                curr--;
            }
            maxi = max(curr,maxi);
            i++;
            j++;
        }
        return maxi;
    }
};