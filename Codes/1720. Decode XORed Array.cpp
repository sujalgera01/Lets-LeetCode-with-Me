class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans;
        ans.push_back(first);
        
        for(int i=0;i<encoded.size();i++){
            int num = abs(encoded[i]-first);
            ans.push_back(num);
            first = num;
        }
        return ans;
    }
};
