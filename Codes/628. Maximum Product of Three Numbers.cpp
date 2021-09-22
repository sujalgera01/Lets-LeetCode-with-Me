class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        long ans;
        long sol1 = 1,sol2 = 1;
        
        sort(nums.begin(),nums.end());
        
        sol1 = sol1*nums[0]*nums[1]*nums[n-1];
        sol2 = sol2*nums[n-1]*nums[n-2]*nums[n-3];
        ans = max(sol1,sol2);
        return ans;
    }
};
