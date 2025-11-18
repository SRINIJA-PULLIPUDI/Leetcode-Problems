class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        long long c=0,m = INT_MAX;
        for(int i=0;i<k;i++){
            if(blocks[i]=='W'){
                c+=1;
            }
        }
        m = min(m,c);
        for(int i=k;i<blocks.size();i++){
            long long s = 0;
            for(int j=i;j>=(i-k+1);j--){
                if(blocks[j]=='W'){
                    s+=1;
                }
            }
            m = min(s,m);
        }
        return m;
    }
};