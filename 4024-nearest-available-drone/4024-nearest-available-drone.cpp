class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int mini = INT_MAX, ind;
        for(int i=0;i<drones.size();i++){
            int k = abs(drones[i][0]-target[0])+abs(drones[i][1]-target[1]);
            if(k <= drones[i][2]) {
                if(k<mini) {
                    mini = k;
                    ind = i;
                }
            }
        }
        if(mini == INT_MAX) return -1;
        return ind;
    }
};