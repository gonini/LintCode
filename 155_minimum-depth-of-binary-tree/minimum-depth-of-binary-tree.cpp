/*
@Copyright:LintCode
@Author:   goni0202
@Problem:  http://www.lintcode.com/problem/minimum-depth-of-binary-tree
@Language: C++
@Datetime: 16-08-11 10:20
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
     * @param root: The root of binary tree.
     * @return: An integer
     */
     
     
    int minDepth(TreeNode *root) 
    {
        
        // write your code here
        int height = 0;
        
        if(root != NULL)
        {
            int leftHeight = minDepth(root->left);
            int rightHeight = minDepth(root->right);
            
            
            
            
            height = 1 + min(leftHeight, rightHeight) ;
            
            if(!leftHeight)
                height = 1 + rightHeight;
            
            if(!rightHeight)
                height = 1 + leftHeight;
        }
        
        return height;
    }
};