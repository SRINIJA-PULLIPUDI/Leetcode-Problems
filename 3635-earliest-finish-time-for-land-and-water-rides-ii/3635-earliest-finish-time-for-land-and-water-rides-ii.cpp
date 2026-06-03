class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int minLand = INT_MAX, minWater = INT_MAX, res = INT_MAX;
        for(int i=0;i<landStartTime.size();i++){
            minLand = min(minLand, landStartTime[i]+landDuration[i]);
        }for(int i=0;i<waterStartTime.size();i++){
            if(waterStartTime[i]<=minLand){
                res = min(res, minLand+waterDuration[i]);
            }else res = min(res, minLand+(waterStartTime[i]-minLand)+waterDuration[i]);
            minWater = min(minWater, waterStartTime[i]+waterDuration[i]);
        }
        for(int i=0;i<landStartTime.size();i++){
            if(landStartTime[i]<=minWater){
                res = min(res, minWater+landDuration[i]);
            }else res = min(res, minWater + (landStartTime[i]-minWater)+landDuration[i]);
        }
        return res;
    }
};