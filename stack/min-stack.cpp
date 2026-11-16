class MinStack {
public:
    /** initialize your data structure here. */
      stack<pair<int,int>>st;
    int m;
    MinStack() {
        m=INT_MAX;
    }
    
    void push(int val) {
        m=min(m,val);
        st.push(make_pair(val,m));
    }
    
    void pop() {
        st.pop();
        if(!st.empty())
        {
            m=st.top().second;
        }
        else m=INT_MAX;
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return m;
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