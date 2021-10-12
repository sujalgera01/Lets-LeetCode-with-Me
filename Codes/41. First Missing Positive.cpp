class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int len = nums.size();
        bool one = false;
        
        // Managing the values out of range and presence of one
        for(int i=0;i<len;i++){
            if(nums[i] == 1)
                one = true;
            
            if(nums[i]<1 || nums[i]>len){
                nums[i] = 1;
            }
        }
        
        if(one == false)
            return 1;
        
        // Maping of values with the index
        for(int i=0;i<len;i++){
            int indx = abs(nums[i]);
            nums[indx - 1] = -abs(nums[indx - 1]);
        }
        
        // Checking out the positive remaining
        for(int i=0; i<len;i++){
            if(nums[i] > 0)
                return i+1;
        }
        return len+1;
        
        
        
    }
};
