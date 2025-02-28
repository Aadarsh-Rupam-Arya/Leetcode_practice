class MinStack {
public:
        stack<pair<int,int>> st; 
       
    // MinStack() {
    // }
    
    void push(int val) {
       int mini = st.empty() ? val : min(st.top().second, val);
        st.push({val,mini});
    }
    
    void pop() {
        if(!st.empty()){
            st.pop();
        }
    }
    
    int top() {
       return st.empty() ? -1 : st.top().first;
    }
    
    int getMin() {
        return st.empty() ? -1 : st.top().second;
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */