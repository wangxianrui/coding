//
// Created by wxrui on 2019/6/8.
//

#ifndef CODING_STRUCT_H
#define CODING_STRUCT_H


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

#endif //CODING_STRUCT_H
