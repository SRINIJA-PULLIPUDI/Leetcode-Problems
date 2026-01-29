class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        if(k==0){
            for(int i=0;i<code.size();i++){
                code[i] = 0;
            }return code;
        }if(k>0){
            vector<int> res(code.size());
            for(int i=0;i<code.size();i++){
                int r=0,j;
                if(i==(code.size()-1)) j = 0;else j=i+1;
                for(int l=0;l<k;l++){
                    r+=code[j];
                    if(j==(code.size()-1)) j = 0;else j++;
                }
                res[i] = r;
            }return res;
        }k = abs(k-0);
        vector<int> res(code.size());
        for(int i=0;i<code.size();i++){
            int r=0,j;
            if(i==0) j = code.size()-1;else j = i-1;
            for(int l=0;l<k;l++){
                r+=code[j];
                if(j==0) j = code.size()-1;else j--;
            }
            res[i] = r;
        }return res;
    }
};