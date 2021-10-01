class Solution {
public:
    int consecutiveNumbersSum(int n) {
        int ct = 0;
        
        for(int k=1 ;2*n > k*(k-1); k++){
            int num = n - (k * (k-1)/2);
            int deno = k;
            if(num % k == 0){
                ct++;
            }
        }
        return ct;
        
    }
};
