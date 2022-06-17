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
    int nocam = 0;
    int noneedcam = 1;
    int hascam = 2;
    int ans = 0;
    
    int dfs(TreeNode *root) {
        if (!root) return noneedcam;
        int l = dfs(root->left);
        int r = dfs(root->right);
        if (l == nocam || r == nocam) {
            ans++;
            return hascam;
        } else if (l == hascam || r == hascam) {
            return noneedcam;
        } else {
            return nocam;
        }
    }
    
    int minCameraCover(TreeNode* root) {
        if (dfs(root) == nocam) ans++;
        return ans;
    }
};