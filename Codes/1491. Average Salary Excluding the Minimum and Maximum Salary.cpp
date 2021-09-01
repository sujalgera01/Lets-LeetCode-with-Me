class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size()-2;
        double sum = 0;
        sort(salary.begin(),salary.end());
        for(int i=1;i<salary.size()-1;i++){
            sum = sum + salary[i];
        }
        double avg = sum/n;
        return avg;
    }
};
