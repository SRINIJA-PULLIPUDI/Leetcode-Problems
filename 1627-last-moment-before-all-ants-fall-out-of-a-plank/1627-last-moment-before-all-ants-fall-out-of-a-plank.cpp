class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int lmax = 0, rmin = INT_MAX;
        for(int i=0;i<=n;i++){
            if(i<left.size()) lmax = max(lmax, left[i]);
            if(i<right.size()) rmin = min(rmin, right[i]);
        }
        if(right.size()==0) return lmax;
        if(left.size()==0) return n-rmin;
        rmin = n-rmin;
        cout<<lmax<<" "<<rmin<<endl;
        int x = abs(lmax-rmin);
        return rmin>lmax?x+lmax:x+rmin;
    }
};