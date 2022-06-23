class Solution {
public:
    
    // Compare function to sort the array based on lastday
    
    static bool fn(vector<int> &c1, vector<int> &c2){
        return c1[1]<c2[1];    
    }
    
    int scheduleCourse(vector<vector<int>>& courses) {
        sort(courses.begin(),courses.end(),fn);
        
        // heap to store the result
        priority_queue<int> maxh;
        int time = 0;
        
        for(auto course: courses){
            if(course[0] + time <= course[1]){
                time+=course[0];
                maxh.push(course[0]);
            }
            else if(!maxh.empty() && maxh.top() >= course[0]){
                time = time + course[0] - maxh.top();
                maxh.pop();
                maxh.push(course[0]);
            }
        }
        
        return maxh.size();
    }
};