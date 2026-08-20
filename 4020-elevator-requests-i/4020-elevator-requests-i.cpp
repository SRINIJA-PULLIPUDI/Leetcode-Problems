class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int k=0,res=0;
        for(int i=0;i<requests.size();i++){
            if(requests[i]!=k){
                res += abs(requests[i]-k);
                k = requests[i];
            } 
        }return res;
    }
};