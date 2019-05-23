class Solution {
public:
    bool IsBalanced_Solution(TreeNode *pRoot) {
        return getDepth(pRoot) != -1;
    }

    int getDepth(TreeNode *root) {
        if (!root)
            return 0;
        int left_depth = getDepth(root->left);
        int right_depth = getDepth(root->right);
        if (left_depth == -1 || right_depth == -1 || abs(left_depth - right_depth) > 1)
            return -1;
        else
            // remember +1
            return 1 + max(left_depth, right_depth);
    }
};