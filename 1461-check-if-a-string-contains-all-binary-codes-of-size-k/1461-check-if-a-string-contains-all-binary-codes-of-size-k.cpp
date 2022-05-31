class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(s.size() < k) return false;
        
        unordered_set<string> ss;
        
        for(int i=0;i<=s.size()-k;i++){
            ss.insert(s.substr(i,k));
        }
        
        if(ss.size() == pow(2,k)){
            return true;
        }
        return false;
    }
};