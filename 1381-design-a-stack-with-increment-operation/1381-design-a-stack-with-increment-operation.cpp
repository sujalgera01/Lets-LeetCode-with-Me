class CustomStack {
public:
    vector<int> s;
    int mx = 0;
    CustomStack(int maxSize) {
        mx = maxSize;
    }
    
    void push(int x) {
        if(s.size() == mx){
            return;
        }
        s.push_back(x);
    }
    
    int pop() {
        if(s.size()==0){
            return -1;
        }
        
        int ele = s.back();
        s.pop_back();
        return ele;
    }
    
    void increment(int k, int val) {
        int a = k;
        if(s.size() < k){
            a = s.size();    
        }
        
        for(int i=0;i<a;i++){
                s[i] += val;
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