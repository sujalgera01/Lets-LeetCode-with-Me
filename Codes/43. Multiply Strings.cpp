class Solution {
public:
    string multiply(string num1, string num2) {
        int len1 = num1.size();
        int len2 = num2.size();
        
        vector<int> ans((len1+len2),0);
        
        for(int i = len1-1; i>=0; i--){
            for(int j = len2-1; j>=0; j--){
                int prod = (num1[i] - '0') * (num2[j] - '0');
                int sum = ans[i + j + 1] + prod;
                ans[i + j] += sum/10;
                ans[i + j + 1] = sum%10;
            }
        }
        
        string str = "";
        for(int i=0; i<(len1+len2); i++){
            if(str.length() != 0 || ans[i] != 0){
                str += (ans[i] + '0');
            }
        }
        
        if(str.length() == 0){
            return "0";
        }
        return str;
    }
};
