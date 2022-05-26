class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int> mp;
        for(auto x: nums){
            mp[x]++;
        }
        
        int ans=0;
        int prev=INT_MIN;
        int maxi=0;
        
        for(auto it : mp){
            if(prev+1==it.first){
                maxi++;
            }
            else{
                maxi=1;
            }
            prev=it.first;
            ans=max(maxi,ans);
        }
        return ans;
    }
};