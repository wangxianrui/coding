//
// Created by wangxr337 on 2019/5/23.
//

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode *root) {
        if (root == nullptr)
            return true;
        return isSym(root->left, root->right);
    }

    bool isSym(TreeNode *root1, TreeNode *root2) {
        if (!root1 && !root2)
            return true;
        if (!root1 || !root2)
            return false;
        return (root1->val == root2->val) && isSym(root1->left, root2->right) && isSym(root1->right, root2->left);
    }
};