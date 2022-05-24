class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<vector<int>> ans;
        vector<int> v;
        for(int j=0;j<cols;j++){
            for(int i=0;i<rows;i++){
                v.push_back(matrix[i][j]); 
            }
            reverse(v.begin(),v.end());
            ans.push_back(v);
            v.erase(v.begin(),v.end());
        }
        matrix = ans;
    }
};