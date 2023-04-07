//https://leetcode.com/problems/two-sum-iv-input-is-a-bst/
//Two Sum IV - Input is a BST

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
    unordered_set<int>map;
    bool findTarget(TreeNode* root, int k) {
        if(root==NULL) 
        return false;
        if(map.count(k-root->val)) 
        return true;
        map.insert(root->val);
        return findTarget(root->left, k)||findTarget(root->right, k);
    }
};