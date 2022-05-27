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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = 0;
        ListNode* temp = head;
        // ListNode* curr = NULL;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }
        int val = len - n;
        temp = head;
        
        if(len == 1){
            head = NULL;
            return head;
        }
        
        if(val == 0){
            head = head->next;
            return head;
        }
        
        while(val-- > 1){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};