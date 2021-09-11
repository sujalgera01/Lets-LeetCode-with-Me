class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size()-1;
        digits[n]+=1;

        while(digits[n]==10 && n>0){
            digits[n] = 0;
            n--;
            digits[n]++;
        }        
        
        
        if(digits[n]==10){
            digits[n]=0;
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};
