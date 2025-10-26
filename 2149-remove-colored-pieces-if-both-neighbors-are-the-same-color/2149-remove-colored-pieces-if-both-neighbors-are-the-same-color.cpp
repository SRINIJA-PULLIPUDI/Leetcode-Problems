class Solution {
public:
    bool winnerOfGame(string colors) {
        int a=0,b=0,a1=0,b1=0;
        for(int i=0;i<colors.size()-1;i++){
            if(colors[i]==colors[i+1]){
                if(colors[i]=='A'){
                    a+=1;
                }else b+=1;
            }else{
                if(colors[i]=='A'){
                    if(a+1>=3){
                        a1+=(a+1)-2;
                    }
                    a = 0;
                }else{
                    if(b+1>=3){
                        b1+=(b+1)-2;
                    }
                    b = 0;
                }
            }
        }
        if(a+1>=3) a1+=(a+1)-2;
        if(b+1>=3) b1+=(b+1)-2;
        if(a1==b1){
            return false;
        }else if(a1>b1) return true;
        else return false;
    }
};