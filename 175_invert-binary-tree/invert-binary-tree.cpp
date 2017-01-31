/*
@Copyright:LintCode
@Author:   goni0202
@Problem:  http://www.lintcode.com/problem/invert-binary-tree
@Language: C++
@Datetime: 16-08-12 06:50
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
public:
    /**
     * @param root: a TreeNode, the root of the binary tree
     * @return: nothing
     */
    void invertBinaryTree(TreeNode *root) {
        // write your code here
        if(root != NULL)
        {
            TreeNode * temp = root->left;
            root->left = root->right;
            root->right = temp;
            
            invertBinaryTree(root->left);
            invertBinaryTree(root->right);
        }
    }
};