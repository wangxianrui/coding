#include <iostream>
#include <vector>

using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode *reConstructBinaryTree(vector<int> pre, vector<int> vin) {
        if (pre.empty())
            return NULL;
        auto *root = new TreeNode(pre[0]);
        int length;
        for (length = 0; length < pre.size(); length++) {
            if (pre[0] == vin[length])
                break;
        }
        vector<int> pre1(pre.begin() + 1, pre.begin() + length + 1);
        vector<int> pre2(pre.begin() + length + 1, pre.end());
        vector<int> vin1(vin.begin(), vin.begin() + length);
        vector<int> vin2(vin.begin() + length + 1, vin.end());
        root->left = reConstructBinaryTree(pre1, vin1);
        root->right = reConstructBinaryTree(pre2, vin2);
        return root;
    }
};
