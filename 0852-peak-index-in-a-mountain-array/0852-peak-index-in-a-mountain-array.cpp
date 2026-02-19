class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        int l=0,r=a.size()-1;
        while((r-l)>1){
            int mid = (l+r)/2;
            cout<<mid<<endl;
            if((mid-1)>=0 and a[mid]>a[mid-1]) l=mid;
            else r = mid;
        }
        return l;
    }
};