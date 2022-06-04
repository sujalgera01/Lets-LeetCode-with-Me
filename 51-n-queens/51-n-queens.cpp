class Solution {
private:
    bool isSafe(vector<string> &board, int n, int row, int col){
        
        //checking top of board till that row
        for(int i=0;i<row;i++){
            if(board[i][col] == 'Q')
                return false;
        }
        
        //Top Left checking in board
        int maxLeft = min(row,col);
        for(int x = 1; x <= maxLeft; x++ ){
            if(board[row-x][col-x] == 'Q')
                return false;
        }
        
        //checking top right in board
        int maxRight = min(row,n-col-1);
        for(int x = 1; x <= maxRight; x++ ){
            if(board[row-x][col+x] == 'Q')
                return false;
        }
        
        return true;
    }
    
    void solve(vector<vector<string>> &res, vector<string> &board, int n, int row){
        if( row == n ){
            res.push_back(board);
            return;
        }
        for(int col=0;col<n;col++){
            if(isSafe(board,n,row,col)){
                board[row][col] = 'Q';
                solve(res,board,n,row + 1);
                board[row][col] = '.';
            }
        }
    }
    
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        string s(n,'.');
        vector<string> board(n,s);
        solve(res,board,n,0);
        return res;
    }
};