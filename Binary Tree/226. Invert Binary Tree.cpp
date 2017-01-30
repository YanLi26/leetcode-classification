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
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return NULL;

        //change left and right
        TreeNode* tmp;
        tmp = root -> left;
        root -> left = root -> right;
        root -> right = tmp;

        //traverse
        invertTree(root -> left);
        invertTree(root -> right);
        return root;
    }
};