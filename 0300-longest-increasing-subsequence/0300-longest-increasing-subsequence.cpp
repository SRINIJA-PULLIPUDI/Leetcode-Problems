class Solution {
public:
    int predicate(int t,vector<int> &a){
        if(a.size()==1) return 0;
        int l = -1,r=a.size();
        while((r-l)>1){
            int mid = (l+r)/2;
            if(a[mid]<t) l=mid;
            else r=mid;
        }
        return r;
    }
    int lengthOfLIS(vector<int>& nums) {
        if(nums.size()==1) return 1;
        int res=1;
        vector<int> a;
        a.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i]>a[a.size()-1]) {
                a.push_back(nums[i]);
                // cout<<nums[i]<<endl;
            }else{
                int x = predicate(nums[i],a);
                // cout<<x<<" ";
                if(x!=-1) {
                    a[x] = nums[i];
                }
                // if(x!=-1) cout<<a[x]<<endl;
            }
            res = max(res,(int)a.size());
        }return res;
    }
};