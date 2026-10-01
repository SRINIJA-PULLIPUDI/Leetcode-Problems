class Solution {
public:
    vector<int> grayCode(int n) {
        if(n==1) return {0,1};
        int a = 3, b = 1;
        vector<int> res = {0,1};
        n--;
        while(n--){
            int k = res.size();
            for(int i=0;i<k;i++){
                if(i<(k/2)) res.push_back(res[i]+a);
                else res.push_back(res[i]+b);
            }
            a*=2;
            b*=2;
        }
        return res;
    }
};