class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int,vector<int>, greater<int>> maxh;
        
        int size = heights.size();
        int sum = 0;
        for(int i = 1;i<size;i++){
            int diff = heights[i] - heights[i-1];
            if(diff <= 0) continue;
            
            maxh.push(diff);
            if(maxh.size() > ladders){
                sum += maxh.top();
                maxh.pop();
            }
            if(sum > bricks) return i - 1;
        }
        return size-1;
    }
};