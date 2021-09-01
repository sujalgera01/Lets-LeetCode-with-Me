class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int d = abs(arr[0]-arr[1]);
        int ct = 1;
        for(int i=1;i<arr.size()-1;i++){
            int d1 = abs(arr[i] - arr[i+1]);
            if(d == d1){
                ct++;
            }
        }
        if( ct == arr.size()-1){
            return true;
        }
        else{
            return false;
        }
    }
};
