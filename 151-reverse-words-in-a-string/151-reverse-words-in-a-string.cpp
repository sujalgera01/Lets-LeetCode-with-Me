class Solution {
public:
    string reverseWords(string s) {
        string k = s + " ";
        vector<string> v;
        string temp = "";
        for(int i=0;i<k.size();i++){
            if(k[i] != ' '){
                temp += k[i];
            }
            else if(k[i] == ' ' && temp.size() > 0){
                v.push_back(temp);
                temp = "";
            }   
        }
        
        string ans = "";
        for(int i=v.size()-1;i>0;i--){
            ans += v[i] + " ";
        }
        ans += v[0];
        return ans;
    }
};