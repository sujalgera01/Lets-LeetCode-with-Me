class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> v;
        for(int i=0;i<accounts.size();i++){
            int sum = 0;
            for(int j=0;j<accounts[i].size();j++){
                sum = sum + accounts[i][j];
            }
            v.push_back(sum);
        }
        int max = *max_element(v.begin(),v.end());
        return max;
    }
};
