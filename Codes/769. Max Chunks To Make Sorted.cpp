class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int chunks = 0, temp = 0;
        for(int i=0;i<arr.size();i++){
            temp = max(temp,arr[i]);
            if(i == temp){
                chunks++;
            }
        }
        return chunks;
    }
};
