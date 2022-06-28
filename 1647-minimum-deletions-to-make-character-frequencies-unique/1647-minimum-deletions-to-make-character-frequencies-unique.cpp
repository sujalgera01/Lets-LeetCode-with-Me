class Solution {
public:
    int minDeletions(string s) {
        vector<int> v(26);        
        
        for (char c : s){
            v[c - 'a']++;
        }
        
        sort(v.begin(), v.end());
        int ct = 0;
        
        for (int i = 24; i >= 0; i--) {
            if(v[i] == 0) 
                break;
            
            if(v[i] >= v[i+1]){
                int prev = v[i];
                v[i] = max(0, v[i+1] -1);
                ct += prev - v[i]; 
            }
        }
        return ct;
    }
};