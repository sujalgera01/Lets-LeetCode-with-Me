class Solution {
public:
    int minimumDeletions(string s) {
        int val1 = 0;
        int val2 = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == 'a'){
                val1++;
                val1 = min(val1,val2);
            }
            if(s[i] == 'b'){
                val2++;
            }
        }
        
        return val1;
        
    }
};