//
// Created by wangxr337 on 2019/5/23.
//

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        if (!head)
            return nullptr;
        ListNode *p = head->next;
        while (p && p->val == head->val)
            p = p->next;
        if (p == head->next) {
            head->next = deleteDuplicates(p);
            return head;
        } else
            return deleteDuplicates(p);
    }
};