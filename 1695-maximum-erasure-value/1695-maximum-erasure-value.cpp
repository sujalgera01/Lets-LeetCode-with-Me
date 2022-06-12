class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> S;
        int curr = 0, ans = 0, i = 0, j = 0;
        int n = nums.size();
        
        while(j<n){
            while(S.count(nums[j]) == 1){
                S.erase(nums[i]);
                curr -= nums[i];
                i++;
            }
            
            curr += nums[j];
            S.insert(nums[j]);
            j++;
            
            ans = max(ans,curr);
        }
        return ans;
    }
};