//https://leetcode.com/problems/add-one-row-to-tree/
//Add One Row to Tree
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
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        if (d == 0 || d == 1) {
            auto node = new TreeNode(v);
            (d == 1 ? node->left : node->right) = root;
            return node;
        }
        if (root && d >= 2) {
            root->left  = addOneRow(root->left,  v, d > 2 ? d - 1 : 1);
            root->right = addOneRow(root->right, v, d > 2 ? d - 1 : 0);
        }
        return root;
    }
};