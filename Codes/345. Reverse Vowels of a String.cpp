class Solution {
public:
    
    bool vowels(char c)
    {
        if(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O'  || c=='u' || c=='U')
        {
            return true;
        }
        return false;
    }
    
    string reverseVowels(string s) {
        int i =0,n =s.length(),j=n-1;
        while(i<j)
        {
            if(vowels(s[i]) && vowels(s[j]))
            {
                int k = s[i];
                s[i] = s[j];
                s[j] =k;
                i++;
                j--;
            }
            else if(vowels(s[i]))
            {
                j--;
            }
            else if(vowels(s[j]))
            {
                i++;
            }
            else
            {
                i++;
                j--;
            }
        }
        return s;
    }
};
