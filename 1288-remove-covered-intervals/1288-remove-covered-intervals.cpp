class Solution {
public:
static bool comp(vector<int>& a, vector<int>& b){
    if(a[0]==b[0]) return a[1]>b[1];
    return a[0]<b[0];
}
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),comp);
        vector<vector<int>> v;
        v.push_back({intervals[0][0], intervals[0][1]});
        for(int i=1;i<intervals.size();i++){
            int l = v.back()[0], r = v.back()[1];
            if(intervals[i][0]>=l and intervals[i][1]<=r) continue;
            else {
                v.push_back({intervals[i][0],intervals[i][1]});
            }
        }
        return v.size();
    }
};