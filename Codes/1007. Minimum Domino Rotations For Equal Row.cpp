class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int ct1 = 0, ct2 = 0, ct3 = 0, ct4 = 0;
        int num1 = tops[0];
        int num2 = bottoms[0];
        for(int i=0;i<tops.size();i++){
            if(ct1 != INT_MAX){
                if(tops[i] == num1){
                    
                }
                else if(bottoms[i] == num1){
                    ct1++;
                }
                else{
                    ct1 = INT_MAX;
                }
            }
            
            if(ct2 != INT_MAX){
                if(bottoms[i] == num1){
                    
                }
                else if(tops[i] == num1){
                    ct2++;
                }
                else{
                    ct2 = INT_MAX;
                }
            }
            
            if(ct3 != INT_MAX){
                if(bottoms[i] == num2){
                    
                }
                else if(tops[i] == num2){
                    ct3++;
                }
                else{
                    ct3 = INT_MAX;
                }
            }
            
            if(ct4 != INT_MAX){
                if(tops[i] == num2){
                    
                }
                else if(bottoms[i] == num2){
                    ct4++;
                }
                else{
                    ct4 = INT_MAX;
                }
            }
        }
        
        int res = min(min(ct1,ct2) , min(ct3,ct4));
        
        if(res != INT_MAX){
            return res;
        }
        else{
            return -1;
        }
    }
};
