class Solution {
    vector<vector<int>> req;
    void Fun(int idx,int n,vector<int> &ds,int k){
        if(idx>n){
            if(ds.size()==k){
                req.push_back(ds);
            }
            return;
        }
        ds.push_back(idx);
        Fun(idx+1,n,ds,k);
        ds.pop_back();
        Fun(idx+1,n,ds,k);
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int> ds;
        Fun(1,n,ds,k);
        return req;
    }
};