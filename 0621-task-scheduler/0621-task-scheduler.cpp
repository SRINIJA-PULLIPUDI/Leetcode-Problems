class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> a(26);
        for(int i=0;i<tasks.size();i++){
            a[tasks[i]-'A']++;
        }
        priority_queue<int> pq;
        for(int i=0;i<26;i++){
            if(a[i]>0) pq.push(a[i]);
        }
        queue<pair<int,int>> q;
        int res=0;
        while(!pq.empty() or !q.empty()){
            res++;
            if(!pq.empty()){
                int k = pq.top();
                pq.pop();
                k--;
                if(k) q.push({k,res});
            }
            while(!q.empty() and q.front().second+n == (res)){
                pq.push(q.front().first);
                q.pop();
            }
        }
        return res;
    }
};