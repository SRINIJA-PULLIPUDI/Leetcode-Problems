class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> a(arr.size());
        for(int i=0;i<arr.size();i++){
            int c=0;
            for(int j=0;j<32;j++){
                if((arr[i]&(1<<j))>=1) c++;
            }
            a[i] = {c,arr[i]};
        }sort(a.begin(),a.end());
        for(int i=0;i<arr.size();i++){
            arr[i] = a[i].second;
        }return arr;
    }
};