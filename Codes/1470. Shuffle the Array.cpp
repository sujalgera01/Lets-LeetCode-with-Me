class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> sol;
        for(int i=0;i<n;i++){
            int x = nums[i];
            sol.push_back(x);
            x = nums[i+n];
            sol.push_back(x);
        }
        return sol;
    }
};
