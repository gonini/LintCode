/*
@Copyright:LintCode
@Author:   goni0202
@Problem:  http://www.lintcode.com/problem/flatten-binary-tree-to-linked-list
@Language: C++
@Datetime: 16-08-11 13:17
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
     
     vector<int> order;
     
     void inOrder(TreeNode *root)
    {
        if(root != NULL)
        {
            order.push_back(root->val);
            inOrder(root->left);
            inOrder(root->right);
        }
    }
    
    void insert(TreeNode * root, int val)
    {
        while(root->right != NULL)
        {
            root = root->right;
        }
        
        TreeNode * node = new TreeNode(val);
        root->right = node;
        
    }
    
    void flatten(TreeNode *root)
    {
        if(root != NULL)
        {
            // write your code here
            inOrder(root);
            root->left = NULL;
            root->right = NULL;
            
            // for(auto e : order)
            //     cout << e << " ";
            // cout << endl;
            
            for(int i = 1; i < order.size(); i++)
            {
                insert(root, order[i]);   
            }
        }
        
        
    }
};