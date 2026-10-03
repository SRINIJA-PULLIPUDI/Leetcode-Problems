class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int> res(temp.size(),0);
        stack<pair<int,int>> st;
        for(int i=0;i<temp.size();i++){
            while(!st.empty() and st.top().first<temp[i]){
                res[st.top().second] = i-st.top().second;
                st.pop();
            }
            st.push({temp[i], i});
        }return res;
    }
};