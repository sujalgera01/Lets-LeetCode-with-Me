class BrowserHistory {
public:
    vector<string> ans;
    int val = 0;
    BrowserHistory(string homepage) {
        ans.push_back(homepage);
    }
    
    void visit(string url) {
        val++;
        ans.erase(ans.begin()+val,ans.end());
        ans.push_back(url);
    }
    
    string back(int steps) {
        val = max(0,val-steps);
        return ans[val];
    }
    
    string forward(int steps) {
        int n = ans.size()-1;
        val = min(val+steps,n);
        return ans[val];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */