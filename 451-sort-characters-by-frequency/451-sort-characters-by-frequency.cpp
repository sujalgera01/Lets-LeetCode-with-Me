class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,long> freq;
        priority_queue<pair<int,char>> maxh;
        string ans;
        
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
        }
        
        for(auto i: freq){
            maxh.push({i.second,i.first});
        }
        
        while(!maxh.empty()){
            for(int i=0;i<maxh.top().first;i++){
                ans.push_back(maxh.top().second);    
            }
            maxh.pop();
        }
        return ans;
    }
};