class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxh;
        for(int i=0;i<stones.size();i++){
            maxh.push(stones[i]);
        }
        
        if(maxh.size() == 1){
            return maxh.top();
        }
        
        while(maxh.size() >= 2){
            int a = maxh.top();
            maxh.pop();
            int b = maxh.top();
            maxh.pop();
            
            if(a!=b){
                maxh.push(abs(a-b));
            } 
        }
        if(maxh.size() == 1)
            return maxh.top();
        return 0;
    }
};