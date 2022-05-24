class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<int> v;
        vector<vector<int>> ans;
        int rows = intervals.size();
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<rows;i++){
            if(ans.empty() || ans.back()[1] < intervals[i][0]){
                v.push_back(intervals[i][0]);
                v.push_back(intervals[i][1]);
                ans.push_back(v);
                v.erase(v.begin(),v.end());
            }
            else{
                ans.back()[1] = max(ans.back()[1],intervals[i][1]);
            }
        }
        return ans;
    }
};