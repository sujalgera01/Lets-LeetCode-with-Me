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
    int kthSmallest(TreeNode* root, int k) {
        int ans = 0;
        int ct = 0;
        findInorder(root,k,ct,ans);
        return ans;
    }
    
    int findInorder(TreeNode* root, int &k, int &ct, int &ans){
        if(root == NULL){
            return 0;
        }
        
        findInorder(root->left,k,ct,ans);
        ct++;
        if(ct == k){
            ans = root->val;
            return ans;
        }
        findInorder(root->right,k,ct,ans);
        
        return 0;
        
    }
};