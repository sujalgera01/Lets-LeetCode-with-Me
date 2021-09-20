class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
//         Approach 1
        vector<int> ans;
        
        if(k>n){
            k = k%n;
        }
        
        for(int i=n-k;i<n;i++){
            ans.push_back(nums[i]);
        }
        
        for(int i=0;i<n-k;i++){
            ans.push_back(nums[i]);
        }
        
        nums = ans;
        
//         Better Approach 
        k = k%n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        
    }
};
