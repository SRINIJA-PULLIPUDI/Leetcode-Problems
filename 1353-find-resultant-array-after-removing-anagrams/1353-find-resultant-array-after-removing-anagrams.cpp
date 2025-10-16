class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> res;
        for(int i=words.size()-1;i>0;i--){
            string s = words[i];
            string s1 = words[i-1];
            sort(s.begin(), s.end());
            sort(s1.begin(),s1.end());
            if(s==s1) {
                words[i]="A";
            }
        }
        for(int i=0;i<words.size();i++){
            if(words[i]!="A") res.push_back(words[i]);
        }
        return res;
    }
};