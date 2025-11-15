class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum=0,res=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        float avg = sum/k;
        if(avg>=threshold) res++;
        int i=0,j=k;
        while(j<arr.size()){
            sum+=arr[j];
            sum-=arr[i];
            float avg = sum/k;
            if(avg>=threshold) res++;
            i++;
            j++;
        }
        return res;
    }
};