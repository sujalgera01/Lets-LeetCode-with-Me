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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL){
            return NULL;
        }
        
        ListNode* temp = head;
        ListNode* fwd = temp->next;
        
        while(fwd != NULL){
            if(temp->val == fwd->val){
                temp->next = fwd->next;
                fwd = fwd->next;
            }
            else{
                temp = fwd;
                fwd = fwd->next;
            }
        }
        return head;
    }
};