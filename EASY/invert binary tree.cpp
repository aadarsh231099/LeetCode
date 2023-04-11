//https://leetcode.com/problems/invert-binary-tree/
//Invert Binary Tree

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
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
            return NULL;
        TreeNode *right=invertTree(root->right);
        TreeNode *left=invertTree(root->left);
        root->right=left;
        root->left=right;
        return root;
    }
};