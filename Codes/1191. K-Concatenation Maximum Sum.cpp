class Solution {
public:
    long long mod=1000000007;
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        int n=arr.size();
        int  ans=0;
        long long sum=0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        
         if(k == 1){
            ans= (forOne(arr,n))%mod;
        }
        
        else if(sum > 0){
            ans= (forTwo(arr,n)+((k - 2) * (sum)))%mod;
        }else{
            ans= (forTwo(arr,n))%mod;
        }
        if(ans<0)
            return 0;
        
        return ans%mod;
    }
    
     int forOne(vector<int> arr, int n) {
        int finals = arr[0];
        int curr = arr[0];
        for(int i = 1 ; i < n; i++){
            curr = max(arr[i], arr[i] + curr);
            finals = max(finals, curr);
        }
        return finals; 
    }
    int forTwo(vector<int> arr, int n) {
        int finals = arr[0];
        int curr = arr[0];
        for(int i = 1 ; i < 2 * n; i++){
            curr = max(arr[i % n], arr[i % n] + curr);
            finals = max(finals, curr);
        }
        return finals; 
    }
};
