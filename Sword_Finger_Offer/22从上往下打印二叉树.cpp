/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    vector<int> PrintFromTopToBottom(TreeNode *root) {
        if (!root)
            return {};
        vector<int> result;
        queue < TreeNode * > tree_q;
        tree_q.push(root);
        while (!tree_q.empty()) {
            int length = tree_q.size();
            for (int i = 0; i < length; i++) {
                TreeNode *node = tree_q.front();
                result.push_back(node->val);
                tree_q.pop();
                if (node->left)
                    tree_q.push(node->left);
                if (node->right)
                    tree_q.push(node->right);
            }
        }
        return result;
    }
};
