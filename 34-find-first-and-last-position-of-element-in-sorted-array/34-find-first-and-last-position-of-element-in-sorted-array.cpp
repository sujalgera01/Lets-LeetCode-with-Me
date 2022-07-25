class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        if(nums.size() == 0){
            return {-1,-1};
        }
        
        for(int k = 0;k<nums.size();k++){
            if(nums[k] == target){
                ans.push_back(k);
            }
        }
        
        if(ans.size() == 0){
            return {-1,-1};
        }
        int start = *min_element(ans.begin(),ans.end());
        int end = *max_element(ans.begin(),ans.end());
        
        return {start,end};
    }
};