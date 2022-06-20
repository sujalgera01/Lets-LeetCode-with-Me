class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        set<string> s1(words.begin(),words.end());
        set<string> s2(words.begin(),words.end());
        
        for(auto word: s1){
            for(int i=1;i<word.size();i++){
                s1.erase(word.substr(i));
            }
        }
        
        string s = "";
        for(auto word : s1){
            s += word + "#";
        }
        return s.size();
    }
};