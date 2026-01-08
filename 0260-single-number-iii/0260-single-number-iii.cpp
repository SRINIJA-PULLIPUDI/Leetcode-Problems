class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        if(nums.size()==2) return nums;
        long long Xor = 0;
        for(long long i=0;i<nums.size();i++){
            Xor^=nums[i];
        }
        cout<<Xor<<endl;
        long long pos=0;
        for(long long i=0;i<32;i++){
            if((Xor&(1<<i))>0){
                pos=i;
                break;
            }
        }
        cout<<pos<<endl;
        long long res1=0,res2=0;
        for(long long i=0;i<nums.size();i++){
            if(nums[i]&(1<<pos)) res1^=nums[i];
            else res2^=nums[i];
        }
        vector<int> res(2);
        res[0] = res1,res[1] = res2;
        return res;
    }
};