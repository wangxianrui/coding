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
    vector<int> nums;

public:
    int sumNumbers(TreeNode *root) {
        if (!root)
            return 0;
        numbers(root, 0);
        int result = 0;
        for (int i = 0; i < nums.size(); i++)
            result += nums[i];
        return result;
    }

    void numbers(TreeNode *root, int num) {
        if (!root->left && !root->right) {
            num = num * 10 + root->val;
            nums.push_back(num);
            return;
        }
        if (root->left)
            numbers(root->left, num * 10 + root->val);
        if (root->right)
            numbers(root->right, num * 10 + root->val);
    }
};