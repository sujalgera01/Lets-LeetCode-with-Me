class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        vector<int> temp = arr;
        sort(temp.begin(),temp.end());
        
        long long int x=0, y=0, chunks = 0;
        for(int i=0;i<arr.size();i++){
            x = x + arr[i];
            y = y + temp[i];
            
            if(x == y){
                chunks++;
            }
        }
        
        return chunks;
    }
};
