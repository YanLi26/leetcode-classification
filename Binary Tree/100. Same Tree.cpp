/*
Given two binary trees, write a function to check if they are equal or not.
Two binary trees are considered equal if they are structurally identical and the nodes have the same value.
*/

//use &&

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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        //identify if it p equals q or not
        if(p == NULL && q == NULL) return true;
        else if (p == NULL) return false;
        else if (q == NULL) return false;
        else if(p->val != q->val) return false;
        //use && to identify all leaves are same or not
        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }
};