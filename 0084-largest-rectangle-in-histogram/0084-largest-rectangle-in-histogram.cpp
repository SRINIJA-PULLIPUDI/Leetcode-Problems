class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int res=0;
        for(int i=0;i<=heights.size();i++){
            int c;
            if(heights.size()==i) c=0;
            else c = heights[i];
            while(!st.empty() and c<heights[st.top()]){
                int k = st.top();
                st.pop();
                if(st.empty()) res = max(res, heights[k]*i);
                else res = max(res, heights[k]*(i-st.top()-1));
            }
            st.push(i);
        }
        return res;
    }
};