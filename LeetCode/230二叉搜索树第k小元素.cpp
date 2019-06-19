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
    int kthSmallest(TreeNode *root, int k) {
        return inOrderTravel(root, k);
    }

    int inOrderTravel(TreeNode *root, int k) {
        TreeNode *cur_node = root;
        int count = 0;
        stack < TreeNode * > node_stack;
        while (true) {
            while (cur_node) {
                node_stack.push(cur_node);
                cur_node = cur_node->left;
            }
            while (!cur_node) {
                if (node_stack.empty())
                    return 0;
                TreeNode *node = node_stack.top();
                node_stack.pop();
                cur_node = node->right;
                count++;
                if (count == k)
                    return node->val;
            }
        }
    }
};