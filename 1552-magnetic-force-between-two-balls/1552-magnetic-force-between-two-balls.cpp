class Solution {
public:
#define ll long long
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        ll l=0,r=1e9+1;
        while((r-l)>1){
            ll mid = (l+r)/2;
            ll k=position[0],s=1;
            for(ll i=1;i<position.size();i++){
                if((position[i]-k)>=mid){
                    s++;
                    k=position[i];
                }
                if(s>=m){
                    break;
                }
            }
            // cout<<mid<<" "<<s<<endl;
            if(s>=m) l=mid;
            else r=mid;
        }
        cout<<l<<" "<<r;
        return l;
    }
};