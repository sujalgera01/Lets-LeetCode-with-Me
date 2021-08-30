class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<int> summation;
        vector<bool> ans;
        
        int max = 0;
        for(int i=0;i<candies.size();i++){
            max = *max_element(candies.begin(),candies.end());
        }
        
        for(int i=0;i<candies.size();i++){
            summation.push_back(candies[i] + extraCandies);
            
            if(summation[i]>=max){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};
