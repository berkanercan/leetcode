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
    bool isValidBST(TreeNode* root) {
        return valid(root, '#', '#');
    }
    
    bool valid(TreeNode* node, int min, int max){
        if(node == NULL)
            return true;
            
        return (min == '#' || node->val > min) && (max == '#' || node->val < max)
            && valid(node->left, min, node->val) 
            && valid(node->right, node->val, max);
    }
};
