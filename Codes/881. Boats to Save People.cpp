class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int l = 0;
        int r = people.size() - 1;
        int ct = 0;
        
        while(l <= r){
            int sum = people[l] + people[r];
            if(sum < limit || sum == limit){
                ct++;
                l++;
                r--;
            }
            else{
                ct++;
                r--;
            }
        }
        return ct;
        
    }
};
