class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int miniLand = INT_MAX;
        int res = INT_MAX;
        int miniWater = INT_MAX;
        for(int i=0;i<landStartTime.size();i++){
            miniLand = min(miniLand, landStartTime[i]+landDuration[i]);
        }
        for(int i=0;i<waterStartTime.size();i++){
            if(waterStartTime[i]<=miniLand){
                res = min(res,miniLand+waterDuration[i]);
            }else{
                int k = waterStartTime[i]-miniLand;
                res= min(res,miniLand+k+waterDuration[i]);
            }
            miniWater = min(miniWater, waterStartTime[i]+waterDuration[i]);
        }for(int i=0;i<landStartTime.size();i++){
            if(landStartTime[i]<=miniWater){
                res = min(res,miniWater+landDuration[i]);
            }else{
                int k = landStartTime[i]-miniWater;
                res = min(res,miniWater+k+landDuration[i]);
            }
        }return res;
    }
};