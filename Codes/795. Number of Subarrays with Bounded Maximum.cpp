class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int n = nums.size();
        int h = 0, l = 0, ans = 0;
        
        for(int n : nums){
            if(n>right){
                h = 0;
            }
            else{
                h++;
                ans = ans + h;
            }
            
            if(n>=left){
                l = 0;
            }
            else{
                l++;
                ans = ans-l;
            }
        }
        return ans;
    }
};
