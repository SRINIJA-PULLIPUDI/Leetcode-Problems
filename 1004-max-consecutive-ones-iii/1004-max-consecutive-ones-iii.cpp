class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        if(k==0){
            int maxi=0,curr=0,f=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]==1) f = 1;
                if(nums[i]==1 and nums[i]==nums[i+1]) {
                    curr++;
                }else{
                    maxi = max(maxi,curr+1);
                    curr=0;
                }
                cout<<curr<<endl;
            }
            if(f) return maxi;
            return 0;
        }
        int x=0,curr=0,maxi=0;
        queue<int> q;
        for(int i=0;i<nums.size();i++){
            if(x==k) break;
            curr++;
            if(nums[i]==0){
                x++;
                q.push(i);
            }
        }
        maxi = max(maxi,curr);
        int j=curr;
        while(j<nums.size()){
            if(nums[j]==0){
                if(!q.empty()) curr = (j-(q.front()+1)+1);
                q.pop();
                q.push(j);
            }else{
                curr++;
            }
            j++;
            maxi = max(curr,maxi);
        }
        return maxi;
    }
};