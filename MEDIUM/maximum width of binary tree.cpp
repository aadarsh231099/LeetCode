//https://leetcode.com/problems/maximum-width-of-binary-tree/
//Maximum Width of Binary Tree

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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,long>> q;
        q.push({root,1});
        int n,start,end,dif;
        int res=1;
        while(!q.empty()){
            n=q.size();
            for(int i=0;i<n;i++){
                auto [node,pos]=q.front();
                q.pop();
                if(i==0){
                    start=pos;
                    dif=pos-1;
                }
                if(i==n-1) end=pos;
                pos-=dif;
                if(node->left!=nullptr) q.push({node->left,pos*2-1});
                if(node->right!=nullptr) q.push({node->right,pos*2});
            }
            res=max(res,end-start+1);
        }
        return res;
    }
};