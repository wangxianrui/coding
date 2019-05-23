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
    vector <vector<int>> FindPath(TreeNode *root, int expectNumber) {
        if (!root)
            return {};
        temp.push_back(root->val);
        if (root->val == expectNumber && !root->left && !root->right)
            result.push_back(temp);
        FindPath(root->left, expectNumber - root->val);
        FindPath(root->right, expectNumber - root->val);
        temp.pop_back();
        return result;
    }

private:
    vector <vector<int>> result;
    vector<int> temp;
};