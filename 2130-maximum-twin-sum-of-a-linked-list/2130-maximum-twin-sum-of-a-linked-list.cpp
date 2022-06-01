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
    int pairSum(ListNode* head) {
        
        // Solving by creating vector.. Will also give the LL solution soon.
        vector<int> v;
        ListNode* temp = head;
        while(temp!= NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }
        
        // 2 pointer approach
        int val = INT_MIN;
        int i = 0;
        int j = v.size()-1;
        
        while(i<j){
            val = max(val,v[i++]+v[j--]);
            // i++;
            // j--;
        }
        return val;      
    }
};