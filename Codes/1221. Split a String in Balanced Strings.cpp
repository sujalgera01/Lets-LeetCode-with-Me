class Solution {
public:
    int balancedStringSplit(string s) {
        int ctL = 0;
        int ctR = 0;
        int ans = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == 'R'){
               ctR++; 
            }
            if(s[i] == 'L'){
                ctL++;
            }
            if(ctR == ctL){
                ans++;
                ctR = 0;
                ctL = 0;
            }
        }
        return ans;
    }
};
