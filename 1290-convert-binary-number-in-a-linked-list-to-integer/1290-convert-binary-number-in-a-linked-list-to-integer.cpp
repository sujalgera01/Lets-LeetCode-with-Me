/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        string s;
        while(head){
            int x = head->val;
            s = s + to_string(x);
            head = head->next;
        }

        int ans = 0;
        int n = s.size();
        int m=0;
        for(int i=n-1;i>=0;i--){
            ans += (s[i]-'0')*pow(2,m);
            m++;
        }
        return ans;
    }
};