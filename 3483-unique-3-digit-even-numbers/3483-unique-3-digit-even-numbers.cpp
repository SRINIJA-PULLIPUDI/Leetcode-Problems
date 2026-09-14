class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        unordered_map<int,int> mp;
        for(int i=0;i<digits.size();i++){
            mp[digits[i]]++;
        }
        int res=0;
        for(int i=100;i<=998;i+=2){
            int a = i/100, b = (i/10)%10, c = i%10; 
            vector<int> k(10,0);
            k[a]++;
            k[b]++;
            k[c]++;
            int f=1;
            for(int i=0;i<10;i++){
                if(mp[i]<k[i]){
                    f=0;
                    break;
                }
            }
            if(f) res++;
        }return res;
    }
};