class Solution {
public:
static bool comp(pair<int,int>a,pair<int,int>b){
    if(a.first<b.first){
        return true;
    }
    else{
        return false;
    }
}
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int k = nums.size();
        vector<pair<int,int>> s;
        vector<int> req;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                s.push_back({nums[i][j],i});
            }
        }
        sort(s.begin(),s.end(),comp);
        for(int i=0;i<s.size();i++){
            cout<<s[i].first<<" "<<s[i].second<<endl;
        }
        int left = 0,right = 0;
        int a,b,mum = INT_MAX,mn,mx;
        //mp[s[0].second]+=1;
        while(right<s.size()){
            mp[s[right].second] += 1;
            while(mp.size()==k){
                a = s[left].first;
                b = s[right].first;
                if((b-a)<mum){
                    mn = a;
                    mx = b;
                    mum = b-a;
                }
                mp[s[left].second]-=1;
                if(mp[s[left].second]==0){
                    mp.erase(s[left].second);
                }
                left+=1;
            }
            right+=1;
        }
        req.push_back(mn);
        req.push_back(mx);
        return req;
    }
};