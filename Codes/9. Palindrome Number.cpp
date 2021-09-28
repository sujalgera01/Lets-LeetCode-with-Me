class Solution {
public:
    bool isPalindrome(int x) {
        long long int z = x;
        if(x<0){
            return false;
        }
        else{
            long long int y = 0;
            while(x>0){
                y = y*10 + x%10;
                x = x/10;
            }
            
            if(y != z){
                return false;
            }
            else{
                return true;
            }
        }
    }
    
};
