class Solution {
public:
    
    void checkNeighbors(vector<vector<char>> &grid,int i,int j,int rows,int cols){
        if(i<0 || i>=rows || j<0 || j>=cols || grid[i][j] != '1'){
            return;
        }
        
        grid[i][j] = '2';
        
        checkNeighbors(grid,i+1,j,rows,cols);
        checkNeighbors(grid,i,j+1,rows,cols);
        checkNeighbors(grid,i-1,j,rows,cols);
        checkNeighbors(grid,i,j-1,rows,cols);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        if(rows == 0) return 0;
        
        int ct = 0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j] == '1'){
                    checkNeighbors(grid,i,j,rows,cols);
                    ct++;
                }
            }
        }
        
        return ct;
    }
};