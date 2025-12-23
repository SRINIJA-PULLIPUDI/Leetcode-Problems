class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int res=0;
        for(int i=0;i<arr.size();i++){
            double x = ((i+1)*(arr.size()-i))/2.0;
            res += (ceil(x)*arr[i]);
        }
        return res;
    }
};