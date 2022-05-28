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
    bool hasCycle(ListNode *head) {
        map<ListNode*, bool> mp;
        ListNode* temp = head;
        
        if(temp == NULL){
            return false;
        }
        
        while(temp!=NULL){
            if(mp[temp] == true){
                return true;
            }
            
            mp[temp] = true;
            temp = temp -> next;
        }
        return false;
            
    }
};