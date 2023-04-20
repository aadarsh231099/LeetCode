//https://leetcode.com/problems/longest-zigzag-path-in-a-binary-tree/
//Longest ZigZag Path in a Binary Tree

class Solution {
public:
    int longestZigZag(TreeNode* root) {
        int maxLen=0;
        dfs(root,maxLen);
        return maxLen;
    }
    pair<int, int> dfs(TreeNode* node,int& maxLen) {
        if (!node) return {0, 0};
        auto left=dfs(node->left,maxLen);
        auto right=dfs(node->right,maxLen);
        
        int leftMax=left.second,rightMax=right.first;
        maxLen=max(maxLen,max(leftMax,rightMax));
        
        return {1+left.second,1+right.first};
    }
};