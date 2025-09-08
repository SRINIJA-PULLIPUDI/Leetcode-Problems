class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        string a = "";
        string b = "";
        string c = "";
        string d = "";
        for(int i=0;i<num1.size();i++){
            if(num1[i]=='+') break;
            a+=num1[i];
        }
        int f=0;
        for(int i=0;i<num1.size();i++){
            if(num1[i]=='i') break;
            if(f==1) b+=num1[i];
            if(num1[i]=='+') f = 1;
        }
        for(int i=0;i<num2.size();i++){
            if(num2[i]=='+') break;
            c+=num2[i];
        }
        f = 0;
        for(int i=0;i<num2.size();i++){
            if(num2[i]=='i') break;
            if(f==1) d+=num2[i];
            if(num2[i]=='+') f = 1;
        }
        int k,l,m,n;
        k = stoi(a);
        l = stoi(b);
        m = stoi(c);
        n = stoi(d);
        cout<<k<<" "<<l<<" "<<m<<" "<<n;
        int x = (k*m)-(l*n);
        int z = (k*n)+(l*m);
        string res = to_string(x);
        string res1 = to_string(z);
        res+='+';
        res+=res1;
        res+='i'; 
        return res;
    }
};