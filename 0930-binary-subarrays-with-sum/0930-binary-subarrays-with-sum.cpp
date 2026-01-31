class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        if(goal==0){
            int res=0,curr=0,x=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0){
                    curr++;
                }else{
                    res+=(curr*(curr+1)/2);
                    curr=0;
                }
            }res+=(curr*(curr+1)/2);
            return res;
        }
        vector<int> o;
        int res=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) o.push_back(i);
        }
        if(o.size()<goal) return 0;
        if(o.size()==goal) return (o[0]+1)*(nums.size()-o[o.size()-1]); 
        res+=((o[0]+1)*(o[goal]-1-o[goal-1]+1));
        int i=1,j=goal;
        cout<<o[i]<<" "<<o[j]<<endl;
        while(j<o.size()-1){
            int x = o[i-1]+1,y;
            if(j==(o.size()-1)) y = o[j];
            else y = o[j+1]-1;
            cout<<o[i]<<" "<<o[j]<<endl;
            res+=((o[i]-x+1)*(y-o[j]+1));
            i++;j++;
        }
        int k = o[o.size()-goal-1]+1;
        res+=((o[o.size()-goal]-k+1)*(nums.size()-o[o.size()-1]));
        return res;
    }
};