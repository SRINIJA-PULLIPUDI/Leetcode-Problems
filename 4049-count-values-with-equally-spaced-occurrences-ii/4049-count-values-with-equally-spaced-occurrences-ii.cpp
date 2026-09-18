class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        int res=0;
        for(auto i:mp){
            if(i.second.size()>=3) {
                int f=0,k=i.second[1]-i.second[0];
               for(int j=0;j<i.second.size()-1;j++){
                if(i.second[j+1]-i.second[j]!=k) {
                    f = 1;
                    break;
                }
               }
               if(f==0) res++;
            }
        }
        return res;
    }
};