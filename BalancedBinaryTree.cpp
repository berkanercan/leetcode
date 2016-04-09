/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root == NULL)
            return true;
            
        return ( abs(height(root->left) - height(root->right)) <= 1)
            && isBalanced(root->left)
            && isBalanced(root->right);
    }
    
    int height(TreeNode* node){
        if(node == NULL)
            return 1;
        
        return max(1 + height(node->left), 1 + height(node->right) );
    }
};
