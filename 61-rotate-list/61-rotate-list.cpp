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
        // Base Case when node = 0 or 1
        if(head == NULL || head->next == NULL){
            return head;
        }
        
        // Creating vector and push all elements in a vector
        vector<int> v;
        ListNode* temp = head;
        
        while(head!= NULL){
            v.push_back(head->val);
            head = head->next;
        }
        
        int n = v.size();
        k = k%n;
        
        // case when k is a multiple of size of LL. In that case just return head.
        if(k == 0) return temp;
        
        // rotate vector to right by k times
        rotate(v.begin(),v.begin()+v.size()-k, v.end());
        
        // vector to linked list
        ListNode* dummy = new ListNode();
        ListNode* res = dummy;
        for(int i=0;i<n;i++){
            ListNode* newNode = new ListNode(v[i]);
            dummy->next = newNode;
            dummy = dummy->next;
        }
        return res->next;
    }
};