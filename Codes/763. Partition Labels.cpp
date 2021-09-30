#include<algorithm>
class Solution {
public:
    vector<int> partitionLabels(string s) {
      vector<int> map(26);
        
        // Making of hashMap...
        for(int i=0;i<s.size();i++){
            map[s[i] - 'a'] = i;
        }
        
        // printing the vector result....
        vector<int> v;
        int mx = 0;
        int prev = -1;
        for(int i=0;i<s.size();i++){
            mx = max(mx, map[s[i] - 'a']);
            if(mx == i){
                v.push_back(mx-prev);
                prev = mx;
            }
        }
        
        return v;
        
    }
};
