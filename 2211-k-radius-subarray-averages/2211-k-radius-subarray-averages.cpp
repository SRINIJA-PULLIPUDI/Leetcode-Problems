class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = (int)nums.size();
        vector<int> req(n,-1);
        if (k>(int)nums.size()){
            return req;
        }
        if(k==0) return nums;
        long long s = 0;
        long long  c = 0;
        if(k+k+1<=(int)nums.size()){
            for(int i=0;i<(k+k+1);i++){
                s+=nums[i];
                c+=1;
            }
            cout<<c;
            if(c!=0){
                req[k] = s/c;
            }
            for(int i=(k+k+1);i<n;i++){
                s+=nums[i];
                s-=nums[i-k-k-1];
                req[i-k] = (s/(k+k+1));
            }
            return req;
            cout<<count(req.begin(),req.end(),-1);
        }
        return req;
    }
};