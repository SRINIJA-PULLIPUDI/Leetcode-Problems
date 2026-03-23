class Solution {
public:
#define ll long long
    int shipWithinDays(vector<int>& weights, int days) {
        ll l=0,r=(1e9)+1;
        while((r-l)>1){
            ll mid = (l+r)/2;
            ll k=0,s=0,f=0;
            for(ll i=0;i<weights.size();i++){
                if((k+weights[i])<=mid){
                    k+=weights[i];
                }else{
                    k=weights[i];
                    s++;
                }
                if(mid<weights[i]){
                    f=1;
                    break;
                }
            }
            if(f){
                l=mid;
                continue;
            }
            if(k>0) s++;
            // cout<<mid<<" "<<k<<" "<<s<<endl;
            if((s<=days)) r=mid;
            else l=mid;
        }
        return r;
    }
};