class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int start=0,end=0;
        vector<vector<int>> dp(n,vector<int> (n,-1));
        for(int i=0;i<s.size();i++){
            dp[i][i] = 1;
        }
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]){
                dp[i][i+1] = 1;
                if(((i+1)-i+1) > end-start+1) {
                    start = i;
                    end = i+1;
                }
            }
        }
        int j = n-2;
        while(j>0){
            for(int i=0;i<j;i++){
                int k = (n-j);
                if(s[i]==s[i+k] and dp[i+1][i+k-1]==1){
                    dp[i][i+k] = 1;
                    if(((i+k)-i+1) > end-start+1) {
                        start = i;
                        end = i+k;
                    }
                }
            }
            j--;
        }
        // for(int i=0;i<s.size();i++){
        //     for(int j=0;j<s.size();j++){
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        string res = "";
        for(int i=start;i<=end;i++){
            res+=s[i];
        }
        cout<<start<<" "<<end;
        return res;
    }
};