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
    void swap( TreeNode& n1, TreeNode& n2){
        TreeNode temp(n1);
        n1 = n2;
        n2 = temp;
    }
    
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL)
            return root;
            
        if( root->left != NULL && root->right != NULL ){
            swap( *invertTree(root->left), *invertTree(root->right) );    
        }   
        else if(root->left != NULL){
            root->right = root->left;
            root->left = NULL;
            invertTree(root->right);
            //swap( *invertTree(root->left), *root->right );
        }
        else if(root->right != NULL){
            root->left = root->right;
            root->right = NULL;
            invertTree(root->left);
            //swap( *invertTree(root->right), *root->left );
        }
        
        return root;
    }
};
