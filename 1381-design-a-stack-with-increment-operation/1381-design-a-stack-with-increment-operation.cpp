class CustomStack {
public:
    int max;
    vector<int> stk;
    
    CustomStack(int maxSize) {
        max = maxSize;
    }
    
    void push(int x) {
        if(stk.size() < max){
            stk.push_back(x);
        }
    }
    
    int pop() {
        if(stk.size() == 0){
            return -1;
        }
        int x = stk.back();
        stk.pop_back();
        return x;
    }
    
    void increment(int k, int val) {
        int x = k;
        if(stk.size() < k){
            x = stk.size();
        }
        for(int i = 0; i<x; i++){
                stk[i] += val;
        }
        
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */