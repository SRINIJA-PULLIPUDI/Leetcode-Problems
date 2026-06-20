class Solution {
public:
    int minLights(vector<int>& lights) {
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i=0;i<lights.size();i++){
            if(lights[i]!=0){
                int l = max(0,i-lights[i]);
                int r = min((int)(lights.size()-1),i+lights[i]);
                // cout<<l<<" "<<r<<endl;
                pq.push({l,r});
            }
        }
        // cout<<"break";
        if(pq.empty()){
            return ceil(lights.size()/3.0);
        }
        vector<pair<int,int>> vp;
        vp.push_back(pq.top());
        pq.pop();
        while(!pq.empty()){
            int end1 = vp[vp.size()-1].second;
            if(end1>=pq.top().first){
                end1 = max(end1,pq.top().second);
                vp[vp.size()-1].second = end1;
            }else{
                vp.push_back({pq.top().first,pq.top().second});
            }
            pq.pop();
        }
        int res=0;
        int k = vp[0].first;
        res+= ceil(k/3.0);
        // for(int i=0;i<vp.size();i++){
        //     cout<<vp[i].first<<" "<<vp[i].second<<endl;
        // }
        for(int i=0;i<vp.size()-1;i++){
            int k = vp[i+1].first-vp[i].second-1;
            res+= ceil(k/3.0);
        }
        k = lights.size()-vp[vp.size()-1].second-1;
        res+= ceil(k/3.0);
        return res;
    }
};