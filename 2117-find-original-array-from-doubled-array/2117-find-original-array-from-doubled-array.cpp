class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        map<int,int> mp;
        vector<int> req;
        sort(changed.begin(),changed.end());
        for(int i=0;i<changed.size();i++){
            mp[changed[i]]++;
        }
        for(int i=0;i<changed.size();i++){
            if(mp.find(changed[i]*2)!=mp.end() and mp[changed[i]*2]>0 and mp[changed[i]]>0){
                req.push_back(changed[i]);
                mp[changed[i]]-=1;
                mp[changed[i]*2]-=1;
            }
        }
        int c = 0;
        // for(auto i:mp){
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        for(int i=0;i<mp.size();i++){
            if(mp[i]==0) c+=1;
        }
        if(mp.size()==c) return req;
        return {};
    }
};