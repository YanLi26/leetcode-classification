/*
Given a binary tree, return the bottom-up level order traversal of its nodes' values. (ie, from left to right, level by level from leaf to root).
*/

//level traversal

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

//http://www.cnblogs.com/grandyang/p/4051326.html

class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;
        if(!root) return res;
        queue<TreeNode*> levelNode;
        
        levelNode.push(root);
        while(!levelNode.empty()){
            vector<int> oneLevel;
            int size = levelNode.size();
            for(int i = 0; i < size; i++){
                TreeNode* node = levelNode.front();
                levelNode.pop();
                oneLevel.push_back(node->val);
                if(node->left) levelNode.push(node->left);
                if(node->right) levelNode.push(node->right);
            }
            res.insert(res.begin(),oneLevel);
        }
        return res;
    }
};