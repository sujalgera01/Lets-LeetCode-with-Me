class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sz = nums.size();
        int ans = 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<sz;i++){
            if(nums[i] != i){
                ans = i;
                break;
            }
            else{
                ans = sz;
            }
        }
        return ans;
    }
};