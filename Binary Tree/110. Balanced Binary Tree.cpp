/*
Given a binary tree, determine if it is height-balanced.
For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1.
*/

//http://www.cnblogs.com/grandyang/p/4045660.html
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
        if(!root) return true;
        //if the two subtrees of every node differ by more than one, return false
        if(abs(getDepth(root->left) - getDepth(root->right)) > 1) return false;
        //reversal every node, && means if it has one false, it return false
        return isBalanced(root->left) && isBalanced(root->right);
    }
    //calculate the depth of each node
    int getDepth(TreeNode* root){
        if(!root) return 0;
        return 1 + max(getDepth(root->left), getDepth(root->right));
    }
};