class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        int I = 0, V = 0, X = 0, L = 0, C = 0, D = 0, M = 0;
        int IV = 0, IX = 0, XL = 0, XC = 0, CD = 0, CM = 0;
        
        for(int i=0;i<s.size();i++){
            if(s[i] == 'I')
                I++;
            if(s[i] == 'V')
                V++;
            if(s[i] == 'X')
                X++;
            if(s[i] == 'L')
                L++;
            if(s[i] == 'C')
                C++;
            if(s[i] == 'D')
                D++;
            if(s[i] == 'M')
                M++;
            if(s[i] == 'I' && s[i+1] == 'V')
                IV++;
            if(s[i] == 'I' && s[i+1] == 'X')
                IX++;
            if(s[i] == 'X' && s[i+1] == 'L')
                XL++;
            if(s[i] == 'X' && s[i+1] == 'C')
                XC++;
            if(s[i] == 'C' && s[i+1] == 'D')
                CD++;
            if(s[i] == 'C' && s[i+1] == 'M')
                CM++;
        }
        
        ans = 1*I+5*V+10*X+50*L+100*C+500*D+1000*M-2*IV-2*IX-20*XL-20*XC-200*CD-200*CM;
        
        return ans;
    }
};
