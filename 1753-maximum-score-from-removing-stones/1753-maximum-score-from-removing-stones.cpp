class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int> maxh;
        maxh.push(a);
        maxh.push(b);
        maxh.push(c);
        int ct = 0;
        while(!maxh.empty()){
            int a1 = maxh.top();
            maxh.pop();
            int b1 = maxh.top();
            maxh.pop();
            int c1 = maxh.top();
            
            if(b1 == 0 && c1 == 0){
                break;
            }
            ct++;
            
            maxh.push(a1-1);
            maxh.push(b1-1);
        }
        return ct;
    }
};