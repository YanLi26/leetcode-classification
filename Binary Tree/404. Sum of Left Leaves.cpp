/*
Find the sum of all left leaves in a given binary tree.
*/

//left leaves are the end leaves in the left

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
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root) return 0;
        //identify it is left leaves or not, if it is, return value and search right subtree
        if(root -> left && !root ->left -> left && !root -> left -> right) return sumOfLeftLeaves(root -> right) + root -> left -> val;
        //if it is not left leaves, search left subtree and right subtree
        return sumOfLeftLeaves(root -> left) + sumOfLeftLeaves(root -> right);
    }
};