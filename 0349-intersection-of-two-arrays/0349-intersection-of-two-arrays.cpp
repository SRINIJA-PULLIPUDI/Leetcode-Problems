class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s;
        sort(nums2.begin(),nums2.end());
        for(int i=0;i<nums1.size();i++){
            int k=nums1[i];
            int it = lower_bound(nums2.begin(),nums2.end(),k)-nums2.begin();
            // cout<<it<<" ";
            if(it>=0 and it<nums2.size() and nums2[it]==nums1[i]){
                // cout<<endl<<nums1[i]<<endl;
                s.insert(nums1[i]);
            }
        }
        vector<int> a;
        for(auto i:s){
            // cout<<1<<endl;
            a.push_back(i);
        }
        return a;
    }
};