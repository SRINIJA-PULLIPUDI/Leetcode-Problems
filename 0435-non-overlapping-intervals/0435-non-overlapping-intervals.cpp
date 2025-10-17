class Solution {
public:
static int comp(vector<int> a, vector<int> b){
    // if(a[0]==b[0]) return a[1]<b[1];
    return a[1]<b[1];
}
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(),comp);
        for(int i=0;i<intervals.size();i++){
            cout<<intervals[i][0]<<" "<<intervals[i][1]<<endl;
        }
        int end=0,res=0;
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<intervals[end][1]){
                res++;
            }else end=i;
        }
        return res;
    }
};