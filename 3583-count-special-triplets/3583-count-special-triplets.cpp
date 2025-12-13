class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        map<long long,long long> left;
        map<long long,long long> right;
        long long res = 0;
        long long mod = 1e9 + 7;
        for(long long i=0;i<nums.size();i++){
            right[nums[i]]++;
        }
        left[nums[0]]++;
        cout<<left[nums[0]]<<endl;
        for(long long i=1;i<nums.size()-1;i++){
            long long x = nums[i]*2;
            if(nums[i]==0){
                if(left[x]>=1 and (right[x]-left[x]-1>=1)){
                    res += ((right[x]-left[x]-1)*left[x]);
                    res %= mod;
                }
            }else{
                if(left[x]>=1 and (right[x] - left[x])>=1){
                    res += ((right[x]-left[x]) * left[x]);
                    res %= mod;
                }
            }
            left[nums[i]]++;
        }
        return res;
    }
};