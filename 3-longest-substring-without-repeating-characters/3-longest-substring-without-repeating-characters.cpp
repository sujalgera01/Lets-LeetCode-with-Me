class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> S;
        int i=0, j=0;
        int ans = 0;
        while(i<s.size() && j<s.size()){
            if(S.find(s[j]) == S.end()){
                S.insert(s[j]);
                j++;
                ans = max(ans,j-i);
            }
            else{
                S.erase(s[i]);
                i++;
            }
        }
        
        return ans;
    }
};