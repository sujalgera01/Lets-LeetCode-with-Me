class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> s;
        vector<string> a = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.",
                                "---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        string temp;
        
        for(int i=0;i<words.size();i++){
            temp = "";
            for(int j=0;j<words[i].size();j++){
                temp = temp + a[words[i][j] - 97];
            }
            s.insert(temp);
        }
        return s.size();
    }
};
