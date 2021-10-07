class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
    int ct=0;
    int allow[26]={0};
    for(auto i : allowed)
          allow[i - 'a']++;
        
    for(int i=0;i<words.size();i++)
       {
          int len=words[i].length();
          bool flag=true;
          int j=0;
        
          while(j<len)
              {    if(allow[words[i][j]-'a']==0){  
                        flag=false;
                         break;
                    }
                   j++;
              }
            if(flag) 
			  ct++;
        }
        return ct;
    }
};
