class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int ans = 0;
        int n = cardPoints.size();
        int val = 0;
        
        for(int i = n-k;i<n;i++) 
            ans+=cardPoints[i];
        
        for(int i=0,val=ans;i<k;i++) {
            val -= cardPoints[n-k+i];
            val += cardPoints[i];
            ans = max(ans,val);
        }
        
        return ans;
    }
};