//https://leetcode.com/problems/binary-tree-preorder-traversal/
//Binary Tree Preorder Traversal
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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        auto *curr = root;
        while (curr) {
            if (!curr->left) {
                res.emplace_back(curr->val);
                curr = curr->right;
            } else {
                auto *node = curr->left;
                while (node->right && node->right != curr) {
                    node = node->right;
                }
                if (!node->right) {
                    res.emplace_back(curr->val);
                    node->right = curr;
                    curr = curr->left;
                } else {
                    node->right = nullptr;
                    curr = curr->right;
                }
            }
        }
        return res; 
    }
};