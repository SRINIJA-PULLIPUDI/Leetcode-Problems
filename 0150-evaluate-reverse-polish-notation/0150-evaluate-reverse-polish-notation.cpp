class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="*" or tokens[i]=="/" or tokens[i]=="+" or tokens[i]=="-"){
                int r = st.top();
                st.pop();
                int l = st.top();
                st.pop();
                if(tokens[i]=="*") st.push(l*r);
                else if(tokens[i]=="/") st.push(l/r);
                else if(tokens[i]=="+") st.push(l+r);
                else if(tokens[i]=="-") st.push(l-r);
            }else st.push(stoi(tokens[i]));
        }return st.top();
    }
};