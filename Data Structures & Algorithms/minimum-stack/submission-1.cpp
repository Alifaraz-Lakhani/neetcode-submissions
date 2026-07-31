class MinStack {
public:
    stack<pair<int, int>> st;
    int mini=INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty())
            st.push({val, val});
        else
            st.push({val, min(val, st.top().second)});
    }
    
    void pop() {
        if(!st.empty()) st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};
