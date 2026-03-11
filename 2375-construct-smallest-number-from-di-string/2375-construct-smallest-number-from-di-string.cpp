class Solution {
public:
    string smallestNumber(string p) {
        // int d=0;
        // for(int i=0;i<p.size();i++){
        //     if(p[i]=='D') d++;
        // }if(d==p.size()) return "";
        string s="1";
        int i=0,c=0,k=1;
        while(i<p.size()){
            if(p[i]=='I'){
                s+=(k+1)+'0';
                k++;
            }else{
                // cout<<1<<endl;
                int l=0;
                while(p[i]=='D'){
                    l++;
                    i++;
                }
                // cout<<"l"<<l<<endl;
                i--;
                int h = (k+l);
                k = h;
                s[s.size()-1] = (h+'0');
                h--;
                while(l--){
                    s+=(h+'0');
                    h--;
                } 
            }
            i++;
        }return s;
    }
};