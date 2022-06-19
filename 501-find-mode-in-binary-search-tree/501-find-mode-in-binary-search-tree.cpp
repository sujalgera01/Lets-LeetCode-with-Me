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
    unordered_map<int,int> mp;
    void traverse(TreeNode* root){
        if(root == NULL) return;
        else mp[root->val]++;
        
        traverse(root->left);
        traverse(root->right);
    }
    
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        traverse(root);
        
        int temp = -1;
        for(auto x: mp){
            if(x.second == temp) ans.push_back(x.first);
            else if(x.second > temp){
                temp = x.second;
                ans = {x.first};
            }
        }
        return ans;
    }
};