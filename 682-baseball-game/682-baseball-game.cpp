class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> v;
        for(int i=0;i<ops.size();i++){
            if(ops[i] == "C"){
                v.pop_back();
            }
            else if(ops[i] == "D"){
                int x = v[v.size()-1];
                v.push_back(2*x);
            }
            else if(ops[i] == "+"){
                int a = v[v.size()-1];
                int b = v[v.size()-2];
                v.push_back(a+b);
            }
            else{
                v.push_back(stoi(ops[i]));
            }
        }
        
        int ans = 0;
        for(int i=0;i<v.size();i++){
            ans = ans + v[i];
        }
        
        return ans;
    }
};