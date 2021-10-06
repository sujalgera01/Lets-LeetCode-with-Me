class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans = "";
        int ct = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] != 32){
                ans += s[i];
            }
            else{
                if(ct == k-1)
                    break;
                
                ans += " ";
                ct++;
            }
        }
        return ans;
    }
};
