class Solution {
public:
    
    void calculate(string &s, int i, int j){
        if(s[i] == 'L' && s[j] == 'L'){
            for(int k=i+1;k<j;k++){
                s[k] = 'L';
            }
        }
        else if(s[i] == 'R' && s[j] == 'R'){
            for(int k=i+1;k<j;k++){
                s[k] = 'R';
            }
        }
        else if(s[i] == 'L' && s[j] == 'R'){
              
        }
        else{
            int diff = j-i;
            int mid = (i+j)/2;
            if(diff%2 == 0){
                //Odd number
                for(int k=i+1;k<mid;k++){
                    s[k] = 'R';
                }
                for(int k=mid+1;k<j;k++){
                    s[k] = 'L';
                }
            }else{
                //Even number
                for(int k=i+1;k<=mid;k++){
                    s[k] = 'R';
                }
                for(int k=mid+1;k<j;k++){
                    s[k] = 'L';
                }
            }
        }
    }
    
    
    string pushDominoes(string dominoes) {
        string s = 'L' + dominoes + 'R';
        int i=0;
        int j=1;
        while(j < s.size()){
            while(s[j] == '.'){
                j++;
            }
            
            calculate(s,i,j);
            i = j;
            j++;
        }
        
        return s.substr(1,s.size()-2);
    }
};
