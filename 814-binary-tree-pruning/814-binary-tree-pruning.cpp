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
    TreeNode* pruneTree(TreeNode* root) {
        if(root==NULL)
            return root;
       
            TreeNode* lh = pruneTree(root->left);
            root->left = lh;
            TreeNode * rh = pruneTree(root->right);
            root->right = rh;
            
            if(!root->left and !root->right and root->val==0 )
                return NULL;
        return root;
        
    }
};