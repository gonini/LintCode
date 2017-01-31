/*
@Copyright:LintCode
@Author:   goni0202
@Problem:  http://www.lintcode.com/problem/binary-tree-inorder-traversal
@Language: C++
@Datetime: 16-08-11 13:27
*/

/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */
class Solution {
    /**
     * @param root: The root of binary tree.
     * @return: Inorder in vector which contains node values.
     */
public:


    vector<int> ret;
    void inOrder(TreeNode *root)
    {
        if(root != NULL)
        {
            inOrder(root->left);
            ret.push_back(root->val);
            inOrder(root->right);
        }
    }

    vector<int> inorderTraversal(TreeNode *root) 
    {
        // write your code here
        if(root == NULL) return ret;
        inOrder(root);
        return ret;
    }
};