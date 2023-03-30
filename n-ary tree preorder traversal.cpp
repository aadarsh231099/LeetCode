//https://leetcode.com/problems/n-ary-tree-preorder-traversal/
//N-ary Tree Preorder Traversal
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:

void preOrderHelper(Node *root, vector<int> &result)
{
    if (root == NULL)
    {
        return ; 
    }

    result.push_back(root -> val) ; 
    for (int i = 0 ; i < root -> children.size() ; i ++)
    {
        preOrderHelper (root -> children[i], result) ;   
    }
}

    vector<int> preorder(Node* root) {
        vector<int> result ;
        preOrderHelper (root, result) ; 

        return result; 
    }
};