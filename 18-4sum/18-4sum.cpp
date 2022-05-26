class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int t2 = target - nums[j] - nums[i];
                int start = j+1;
                int end = n-1;
                
                while(start<end){
                    int sum = nums[start]+nums[end];
                    if(sum < t2){
                        start++;
                    }
                    else if(sum > t2){
                        end--;
                    }
                    else{
                        vector<int> quad(4,0);
                        quad[0] = nums[i];
                        quad[1] = nums[j];
                        quad[2] = nums[start];
                        quad[3] = nums[end];
                        ans.push_back(quad);
                        
                        while(start<end && quad[2]==nums[start]) start++;
                        while(start<end && quad[3]==nums[end]) end--;
                    }
                }
                while(j+1<n && nums[j+1] == nums[j]) j++;
            }
            while(i+1<n && nums[i+1] == nums[i]) i++;
        }
        
        return ans;
    }
};