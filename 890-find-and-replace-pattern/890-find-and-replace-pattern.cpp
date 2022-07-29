class Solution {
    bool fun(string word, string patt){
        int n = word.length();
		
        unordered_map< char,char > mp;
        vector<bool> visited (26,false);
        
        for(int i = 0; i < n; i++){
            char c1 = word[i],c2 = patt[i];
            
            if( mp[c1] && mp[c1]!=c2)
                return false;
            if( !mp[c1] && visited[c2-'a'])
                return false;
            
            mp[c1] = c2, visited[ c2-'a' ] = true;
        }
        return true;
    }
    
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        for(string word : words)
            if(fun(word,pattern)){
                ans.push_back(word);  
            } 
        return ans;
    }
};