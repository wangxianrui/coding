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
    vector <vector<int>> levelOrderBottom(TreeNode *root) {
        if (root == nullptr)
            return {};
        vector <vector<int>> result;
        queue < TreeNode * > qtree;
        qtree.push(root);
        while (!qtree.empty()) {
            TreeNode *node;
            vector<int> temp;
            // get length const, qtree will be updated in for loop
            int length = qtree.size();
            for (int i = 0; i < length; i++) {
                node = qtree.front();
                qtree.pop();
                temp.push_back(node->val);
                if (node->left)
                    qtree.push(node->left);
                if (node->right)
                    qtree.push(node->right);
            }
            result.insert(result.begin(), temp);
        }
        return result;
    }
};