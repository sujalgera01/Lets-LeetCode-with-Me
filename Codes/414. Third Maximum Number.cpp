class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int ct = 1;
        sort(nums.begin(),nums.end(),greater< int >());
        if(nums.size()<3){
            return nums[0];
        }
    
        for(int i=1; i< nums.size(); i++){
            if(nums[i]!=nums[i-1])
                ct++;
            if(ct==3)
                return nums[i];
        }
    
    return nums[0];
    }
};
