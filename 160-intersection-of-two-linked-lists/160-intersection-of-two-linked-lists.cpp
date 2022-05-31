/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp = headA;
        
        while(headB != NULL){
            temp = headA;
            while(temp != NULL){
                if(headB == temp){
                    return headB;
                }
                temp = temp->next;
            }
            headB = headB->next;
        }
        return NULL;
    }
};