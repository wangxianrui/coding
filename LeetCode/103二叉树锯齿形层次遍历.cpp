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
    vector <vector<int>> zigzagLevelOrder(TreeNode *root) {
        if (!root)
            return {};

        vector <vector<int>> result;
        queue < TreeNode * > node_queue;
        node_queue.push(root);
        int depth = 1;
        while (!node_queue.empty()) {
            vector<int> layer_node;
            int length = node_queue.size();
            for (int i = 0; i < length; i++) {
                TreeNode *cur_node = node_queue.front();
                node_queue.pop();
                layer_node.push_back(cur_node->val);
                if (cur_node->left)
                    node_queue.push(cur_node->left);
                if (cur_node->right)
                    node_queue.push(cur_node->right);
            }
            if (depth % 2)
                result.push_back(layer_node);
            else {
                reverse(layer_node.begin(), layer_node.end());
                result.push_back(layer_node);
            }
            depth++;
        }
        return result;
    }
};