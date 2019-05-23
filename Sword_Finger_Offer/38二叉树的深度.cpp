class Solution {
public:
    int TreeDepth(TreeNode *pRoot) {
        int depth = 0;
        if (!pRoot)
            return depth;
        queue < TreeNode * > tree_que;
        tree_que.push(pRoot);
        while (!tree_que.empty()) {
            int layer_len = tree_que.size();
            for (int i = 0; i < layer_len; i++) {
                TreeNode *node = tree_que.front();
                tree_que.pop();
                if (node->left)
                    tree_que.push(node->left);
                if (node->right)
                    tree_que.push(node->right);
            }
            depth++;
        }
        return depth;
    }
};