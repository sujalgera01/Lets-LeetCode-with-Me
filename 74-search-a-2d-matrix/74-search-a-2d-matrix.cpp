class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        // bool flag = false;
        // for(int i=0;i<row;i++){
        //     if(target <= matrix[i][col-1]){
        //         for(int j=0;j<col;j++){
        //             if(target == matrix[i][j]){
        //                 flag = true;
        //                 return flag;
        //             }
        //         }
        //     }
        // }
        // return flag;
        
        // Approach 2:
        int low = 0;
        int high = row*col-1;
       
        
        while(low<=high){
             int mid = (low+high)/2;
            if(target == matrix[mid/col][mid%col]){
                return true;
            }
            else if(target < matrix[mid/col][mid%col]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return false;
    }
};