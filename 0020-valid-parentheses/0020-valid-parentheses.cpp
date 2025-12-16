class Solution {
public:
    bool isValid(string s) {
        int i;
        char stack[10000];
        long int top=-1;
        for(i=0;s[i]!='\0';i++)
        {
            if(top==-1){
                top++;
                 stack[top]=s[i];
            }
            else if((stack[top]=='(' && s[i]==')') || (stack[top]=='[' && s[i]==']') || (stack[top]=='{' && s[i]=='}')) top--;
            else {
                top++;
                stack[top]=s[i];
            }
        }
        if(top==-1) return 1;
        else return 0;
    }
};