class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int maxi = *max_element(lights.begin(), lights.end());
        int res=0;
        for(int i=0;i<arrivalTime.size();i++){
            int r = arrivalTime[i]%period;
            if(r >= maxi) res = max(res, period-r);
        }
        return res;
    }
};