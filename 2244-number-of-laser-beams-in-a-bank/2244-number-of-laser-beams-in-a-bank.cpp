class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int s=0,k=0;
        for(int i=0;i<bank.size();i++){
            int c=0;
            for(int j=0;j<bank[i].size();j++){
                if(bank[i][j]=='1') c++;
            }
            s+=(k*c);
            if(c!=0) k = c;
        }
        return s;
    }
};