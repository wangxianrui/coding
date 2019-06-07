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
    int minDepth(TreeNode *root) {
        if (root == nullptr)
            return 0;
        queue < TreeNode * > qtree;
        qtree.push(root);
        int depth = 1;
        while (!qtree.empty()) {
            TreeNode *node;
            int length = qtree.size();
            for (int i = 0; i < length; i++) {
                node = qtree.front();
                qtree.pop();
                if (!node->left && !node->right)
                    return depth;
                if (node->left)
                    qtree.push(node->left);
                if (node->right)
                    qtree.push(node->right);
            }
            depth++;
        }
        return depth;
    }
};