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
    bool isBalanced(TreeNode *root) {
        return getLength(root) != -1;
    }

    int getLength(TreeNode *root) {
        if (root == nullptr)
            return 0;
        int length1 = getLength(root->left);
        int length2 = getLength(root->right);
        if (length1 == -1 || length2 == -1 || abs(length1 - length2) > 1)
            return -1;
        else
            return 1 + max(length1, length2);
    }
};