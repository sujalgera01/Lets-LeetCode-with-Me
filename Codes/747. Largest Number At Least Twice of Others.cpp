class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n= nums.size();
        int max = *max_element(nums.begin(),nums.end());
    
        int ans = 0,sol = 0;
        
        for(int i=0;i<n;i++){
            if(nums[i] == max){
                sol = i;
                continue;
            }
            else if(max >= 2*nums[i]){
                ans = 1;
            }
            else{
                ans = -1;
                break;
            }
        }
        
        if(ans == 1){
            return sol;
        }
        else{
            return ans;
        }
    }
};
