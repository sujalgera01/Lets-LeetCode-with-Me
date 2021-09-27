class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int start = 0;
        int last = nums.size()-1;
        while(start<last){
            if(nums[start] % 2 != 0){
                swap(nums[start],nums[last]);
                last--;
            }
            else{
                start++;
            }
        }
        return nums;
    }
};
