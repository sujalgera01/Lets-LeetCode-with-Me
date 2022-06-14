class Solution {
public:
    
    int minDistance(string word1, string word2) 
    {
        int s = word1.size();
        int ss = word2.size(); 
        
        vector<vector<int>> dp(s+1, vector<int> (ss+1, 0)); 
        
        for(int i=0; i<=s; i++){
            for(int j=0; j<=ss; j++){
                if(i==0 || j==0) continue;
                
                else if(word1[i-1]==word2[j-1])
                    dp[i][j] = 1+dp[i-1][j-1];
                
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        
        return s+ss-2*dp[s][ss];
    }
};