class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans = nums;
        for(int i=n-2;i>0;i--){
            ans[i] = ans[i]*ans[i+1];
        }
        int prod = 1;
        for(int i=0;i<n-1;i++){
            ans[i] = ans[i+1]*prod;
            prod = prod*nums[i];
        }
        
        ans[n-1] = prod;
        return ans;
    }
};
