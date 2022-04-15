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
    ListNode* middleNode(ListNode* head) {
        int ct = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            ct++;
            temp = temp->next;
        }
        
        int mid = 0;
        
        if(ct%2 == 0){
            mid = ct/2;
        }
        else{
            mid = ceil(ct/2);
        }
        temp = head;
        for(int i=0;i<mid;i++){
            temp = temp->next;
        }
        return temp;
    }
};