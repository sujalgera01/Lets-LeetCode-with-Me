class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int i = 0, j = numbers.size()-1;
        
        while(i<j){
            if(numbers[i] + numbers[j] == target){
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
            
            if(numbers[i] + numbers[j] < target) i++;
            if(numbers[i] + numbers[j] > target) j--;
        }
        return {-1,-1};
    }
};