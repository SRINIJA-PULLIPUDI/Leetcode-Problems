class Solution {
public:
map<int,int> mp;
int comp(const pair<int,int> &a, const pair<int,int> &b){
    if(a.second==b.second) return a.first>b.second;
    return a.second>b.second;
}
int exec(vector<int> &res,int x){
    vector<pair<int,int>> copy;
    for(auto i:mp){
        copy.push_back({i.first,i.second});
    }
    sort(copy.begin(),copy.end(),[](const pair<int,int> &a, const pair<int,int> &b){
        if(a.second==b.second) return a.first>b.first;
        return a.second>b.second;   
    });
    int c=0,s=0;
    while(c<x){
        s+=(copy[c].first*copy[c].second);
        c++;
    }
    return s;
}
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int s=0;
        vector<int> res;
        for(int i=0;i<k;i++){
            s+=nums[i];
            mp[nums[i]]++;
        }
        if(mp.size()<=x) res.push_back(s);
        else res.push_back(exec(res,x));
        int i=0,j=k;
        while(j<nums.size()){
            mp[nums[i]]--;
            mp[nums[j]]++;
            s-=nums[i];
            s+=nums[j];
            if(mp.size()<=x) res.push_back(s);
            else res.push_back(exec(res,x));
            i++;
            j++;
        }
        return res;
    }
};