class Solution {
public:
    int minimumCost(vector<int>& cost) {
        if(cost.size()==1) return cost[0];
        sort(cost.rbegin(),cost.rend());
        int res=0,i=0;
        while(i<cost.size()){
            if(i!=cost.size()-1) res+=(cost[i]+cost[i+1]);
            else res+=cost[i];
            i+=3;
        }
        return res;
    }
};