/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> ans;
    vector<int> inorderTraversal(TreeNode* root) {
        TreeNode* temp = root;
        stack<TreeNode*> s;
        vector<int> ans;
        
        while(true){
            if(temp!=NULL){
                s.push(temp);
                temp = temp->left;
            }
            else{
                
                if(s.empty()) break;
                temp = s.top();
                s.pop();
                ans.push_back(temp->val);
                temp = temp->right;
            }
        }
        return ans;
    }
};