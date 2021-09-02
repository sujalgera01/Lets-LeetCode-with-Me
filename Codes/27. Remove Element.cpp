class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ct = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == val){
                nums[i] = -1;
                ct++;
            }
        }
        sort(nums.begin(),nums.end(),greater<int>());
        return nums.size()-ct;
        // return nums;
    }
};
