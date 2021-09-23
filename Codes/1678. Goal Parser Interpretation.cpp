class Solution {
public:
    string interpret(string command) {
        int n = command.size();
        string ans = "";
        for(int i=0;i<n;i++){
            if(command[i] == 'G'){
                ans = ans + "G";
            }
            else if(command[i] == '('){
                if(command[i+1] == ')'){
                    ans = ans + "o";
                }
                else if(command[i+1] == 'a'){
                    ans = ans + "al";
                }
            }
        }
        return ans;
    }
};
