class Solution {
public:
vector<int> fun(string s){
    if(s.size()==2){
        if(s[0]>=48 and s[0]<=57 and s[1]>=48 and s[1]<=57){
            int x = stoi(s);
            vector<int> z;
            z.push_back(x);
            return z;
        }
    }if(s.size()==1){
        int x = stoi(s);
        vector<int> z;
        z.push_back(x);
        return z;
    }
    int x;
    vector<int> z;
    for(int i=0;i<s.size();i++){
        if(s[i]=='*' or s[i]=='+' or s[i]=='-'){
            string s1 = s.substr(0,i);
            string s2 = s.substr(i+1,s.size()-1-(i+1)+1);
            vector<int> left = fun(s1);
            vector<int> right = fun(s2);
            if(s[i]=='*'){
                for(int j=0;j<left.size();j++){
                    for(int k=0;k<right.size();k++){
                        z.push_back(left[j]*right[k]);
                    }
                }
            }else if(s[i]=='+'){
                for(int j=0;j<left.size();j++){
                    for(int k=0;k<right.size();k++){
                        z.push_back(left[j]+right[k]);
                    }
                }
            }else{
                for(int j=0;j<left.size();j++){
                    for(int k=0;k<right.size();k++){
                        z.push_back(left[j]-right[k]);
                    }
                }
            }
        }
    }
    return z;
}
    vector<int> diffWaysToCompute(string s) {
        vector<int> res = fun(s);
        return res;
    }
};