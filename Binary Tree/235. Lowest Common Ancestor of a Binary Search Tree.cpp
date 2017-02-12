/*
Given a binary search tree (BST), find the lowest common ancestor (LCA) of two given nodes in the BST.
*/

//if val>maximun of p's val and q's val, it means that the ancestor is in the left childtree.
//else it is in the right childtree.
//cause it is a BST
//left < root < right

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 //http://www.cnblogs.com/grandyang/p/4640572.html
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return NULL;
        if(root -> val > max(p -> val, q -> val)) return lowestCommonAncestor(root->left, p, q);
        else if(root -> val < min(p -> val, q -> val)) return lowestCommonAncestor(root->right, p, q);
        return root;
    }
};