class Solution {
public:
    int uniquePaths(int m, int n) {
        int total_steps = (m-1)+(n-1);
        int req = m-1;
        double ans = 1;
        
        for (int i = 1; i <= req; i++){
            ans = ans * (total_steps - req + i) / i;
        }
        return (int)ans;
    }
};