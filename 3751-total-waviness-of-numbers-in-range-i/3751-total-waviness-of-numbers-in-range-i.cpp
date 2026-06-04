class Solution {
public:
    int fun(int n){
        string s = to_string(n);
        int peak=0, vall=0;
        for(int i=1;i<s.size()-1;i++){
            if(s[i]>s[i-1] and s[i]>s[i+1]) peak++;
            else if(s[i]<s[i-1] and s[i]<s[i+1]) vall++;
        }return peak+vall;
    }
    int totalWaviness(int num1, int num2) {
        if(num2<=99) return 0;
        int sum=0;
        for(int i=num1;i<=num2;i++){
            sum+=fun(i);
        }return sum;
    }
};