class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int pos = -1;
        for(int i=0;i<nums.size();i++){
            if(nums[i] != 0){
                pos++;
                swap(nums[pos],nums[i]);
            }
        }
    }
};
