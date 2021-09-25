class Solution {
public:
    int reverse(int x) {
        int ans = 0, tmp=0, s=1;
        int dig;
        
        if(x == INT_MIN)
            return 0;
        
        if(x < 0){
            s = -1;
            x = -x;
        }
        
        while(x){
            dig = x%10;
            if(ans > (INT_MAX-dig)/10)
                return 0;
            tmp = ans*10+dig;
            ans = tmp;
            x = x/10;
        }
        
        tmp = s*ans;
        ans = tmp;
        
        return ans;
    }
};
