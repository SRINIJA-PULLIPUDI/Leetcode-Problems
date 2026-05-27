class Solution {
public:
    int minMirrorPairDistance(vector<int>& nums) {
        map<int,vector<int>> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        // for(auto i:mp){
        //     cout<<i.first<<" : ";
        //     for(int j=0;j<i.second.size();j++){
        //         cout<<i.second[j]<<" ";
        //     }cout<<endl;
        // }
        int mini = INT_MAX;
        for(int i=0;i<nums.size();i++){
            string s = to_string(nums[i]);
            reverse(s.begin(),s.end());
            int x = stoi(s);
            // cout<<x<<" ";
            if(mp[x].size()>0){
                int l=-1,r=mp[x].size();
                while((r-l)>1){
                    int mid = (l+r)/2;
                    // cout<<mp[x][mid]<<endl;
                    if(mp[x][mid]<=i) l=mid;
                    else r=mid;
                }
                if(r!=mp[x].size()) mini = min(mini,(mp[x][r]-i));
                // cout<<r<<" "<<i<<" "<<mini<<endl;
            }
        }
        if(mini==INT_MAX) return -1;
        return mini;
    }
};