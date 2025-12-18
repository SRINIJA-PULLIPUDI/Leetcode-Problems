class MyStack {
public:
    MyStack() {
    }
        int mystack[100];
        int t=-1;
    
    void push(int x) {
        mystack[++t]=x;
    }
    
    int pop() {
        int c=mystack[t];
        t--;
        return c;
    }
    
    int top() {
        int c=mystack[t];
        return c;
    }
    
    bool empty() {
        if(t==-1) return 1;
        else return 0;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */