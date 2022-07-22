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
    ListNode* partition(ListNode* head, int x) {
        ListNode* lessNode = new ListNode();
        ListNode* greatNode = new ListNode();
        ListNode *temp = greatNode;
        ListNode *temp2 = lessNode;
        
        while(head != NULL){
            if(head->val < x){
                lessNode->next = new ListNode(head->val);
                lessNode = lessNode->next;
            }
            else{
                greatNode->next = new ListNode(head->val);
                greatNode = greatNode->next;
            }
            head = head->next;
        }
        
        if(lessNode->next == NULL){
            lessNode->next = temp->next;
        }
        
        return temp2->next;
        
        
//         ListNode* prev = NULL;
//         ListNode* temp = head;
//         ListNode* fwd = head->next;
        
//         while(fwd){
//             if(temp->val < x){
//                 prev = temp;
//                 temp = temp->next;
//                 fwd = fwd->next;
//             }
//             else{
//                 temp = temp->next;
//                 fwd = fwd->next;
//             }
//         }
        
    }
};