class Solution {
public:
    static bool compare(string s1, string s2){
        return s1.size()<s2.size();
    }
    
    int longestStrChain(vector<string>& words) {
        int ans = 1;
        sort(words.begin(),words.end(),compare);
        
        unordered_map<string,int> mp;
        
        for(auto word: words){
            mp[word] = 1;
            
            for(int i=0;i<word.size();i++){
                string pre = word.substr(0,i) + word.substr(i+1);
                if(mp.find(pre) != mp.end()){
                    mp[word] = mp[pre] + 1;
                    ans = max(ans, mp[word]);
                }
            }
        }
        return ans;
        
    }
};