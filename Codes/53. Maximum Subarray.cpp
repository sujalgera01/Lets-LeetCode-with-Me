class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int v1 = INT_MIN, v2 = 0;
        for(int i=0;i<n;i++){
            v2 = v2 + nums[i];
            if(v1<v2){
                v1 = v2;
            }
            
            if(v2 < 0){
                v2 = 0;
            }
        }
        return v1;
    }
};
