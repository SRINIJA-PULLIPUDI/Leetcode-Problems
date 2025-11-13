class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int n = nums.size();
        queue<int> z;
        queue<int> o;
        //queue<int> t;
        int f = 0;
        for(int i=0;i<k;i++){
            if(nums[i]==1){
                o.push(i);
            }
            else{
                z.push(i);
            }
        }
        for(int i=k;i<n;i++){
            if(z.size()!=0 and (i-k)==z.front()){
                z.pop();
                z.swap(o);
                f+=1;
            }
            else{
                if(o.size()!=0 and (i-k)==o.front()){
                    o.pop();
                }
                
            }
            if(nums[i]==0){
                z.push(i);
            }
            else{
                o.push(i);
            }
        }
        if(z.size()!=0 and (nums.size()-k)==z.front()){
                z.pop();
                z.swap(o);
                f+=1;
        }
        if(z.size()>0) return -1;
        else return f;
    }
};