class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ct = 0;
        for(int i=0;i<jewels.size();i++){
            for(int j=0;j<stones.size();j++){
                if(stones[j] == jewels[i]){
                    ct++;
                }
            }
        }
        return ct;
    }
};
