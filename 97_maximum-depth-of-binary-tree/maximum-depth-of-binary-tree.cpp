/*
@Copyright:LintCode
@Author:   goni0202
@Problem:  http://www.lintcode.com/problem/maximum-depth-of-binary-tree
@Language: C++
@Datetime: 16-08-11 07:54
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
class Solution 
{
public:
    /**
     * @param root: The root of binary tree.
     * @return: An integer
     */
    int maxDepth(TreeNode *root) 
    {
        // write your code here
        int height = 0;
        
        if(root != NULL)
        {
            int leftHeight = maxDepth(root->left);
            int rightHeight = maxDepth(root->right);
            
            height = 1 + max(leftHeight, rightHeight);    
        }
        
        return height;
    }
};