class MinStack {
public:
    MinStack() {
        
    }
    stack<int>boo;
    vector<int>gah;

    void push(int val) {
        boo.push(val);
        if(gah.empty()){
            gah.push_back(val);
        }else{
            if(val<= gah.back()){
                gah.push_back(val);
            }else{
                gah.push_back(gah.back());
            }
        }
    }
    
    void pop() {
        boo.pop();
        gah.pop_back();
    }
    
    int top() {
        return boo.top();
    }
    
    int getMin() {
        return gah.back();
    }
};
