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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* temp = head;
        vector<int> v;
        
        while(temp!= NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }
        temp = head;
        
        int n = v.size();
        k = k%n;
        
        if(k == 0) return head;
        
        rotate(v.begin(),v.begin()+v.size()-k, v.end());
        ListNode* dummy = new ListNode();
        ListNode* res = dummy;
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
            ListNode* newNode = new ListNode(v[i]);
            dummy->next = newNode;
            dummy = dummy->next;
        }
        return res->next;
    }
};