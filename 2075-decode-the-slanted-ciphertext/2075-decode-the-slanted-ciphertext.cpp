class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        if(encodedText=="") return "";
        if(rows==1) return encodedText;
        // for(int i=0;i<encodedText.size();i++){
        //     if(encodedText[i]==' ') cout<<'*';
        //     else cout<<encodedText[i];
        // }
        int cols = encodedText.size()/rows;
        // cout<<encodedText.size();
        vector<vector<char>> a(rows,vector<char> (cols));
        int r=0,c=0;
        for(int i=0;i<encodedText.size();i++){
            if(c<cols){
                a[r][c] = encodedText[i];
                c++;
            }else{
                r++;
                c=0;
                a[r][c] = encodedText[i];
                c++;
            }
        }
        // for(int i=0;i<a.size();i++){
        //     for(int j=0;j<a[0].size();j++){
        //         cout<<a[i][j]<<" ";
        //     }cout<<endl;
        // }
        string res="";
        for(int k=0;k<cols;k++){
            int i=0,j=k;
            while(i<rows and j<cols){
                res+=a[i][j];
                i++;
                j++;
            }
        }
        int k=res.size()-1,s=0;
        while(res[k]==' '){
            k--;
            s++;
        }
        res.erase(k+1,s);
        // cout<<res;
        return res;
    }
};