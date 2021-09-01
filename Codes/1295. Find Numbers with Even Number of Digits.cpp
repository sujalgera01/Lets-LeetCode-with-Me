class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ct = 0;
        for(int i=0;i<nums.size();i++){
            int n = nums[i];
            int check = floor(log(n)) + 1;
            if(check % 2 == 0){
                ct++;
            }
        }
        return ct;
    }
};
