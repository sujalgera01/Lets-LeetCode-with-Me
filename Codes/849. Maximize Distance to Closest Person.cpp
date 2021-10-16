// 3 cases are possible
// Case 1: Alex at the far left. [A,0,0,0,0,1]
// Case 2: Alex at the far right.[0,0,1,0,0,0,A]
// Case 3: Alex in between of two person. [1,0,0,0,1,0,1]


class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n = seats.size();
        int ans = 0;
        int val = 0;
        
        // Case 1:
        for(int i=0;i<n;i++){
            if(seats[i] == 1){
                ans = max(ans,i);
                break;
            }
        }
        
        // Case 2:
        for(int i=n-1;i>=0;i--){
            if(seats[i] == 1){
                ans = max(ans,n-1-i);
                break;
            }
        }
        
        // Case 3:
        for(int i=0;i<n;i++){
            if(seats[i] == 1){
                val = 0;
            }
            else{
                val++;
                ans = max(ans,(val+1)/2);
            }
        }
        return ans;
    }
};
