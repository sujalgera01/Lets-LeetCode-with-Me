class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool flag = false;
        int m = matrix.size();
        int n = matrix[0].size();
        
        int  i=0, j = n-1;
        while (i <= m-1 && j >= 0){
            if(matrix[i][j] == target){
                return true;
            }
            else if (matrix[i][j] > target){
                j--;
            }
            else if (matrix[i][j] < target){
                i++;
            }            
        }
        return flag;
    }
};