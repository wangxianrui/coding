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
            return head;
        ListNode *p = head;
        while (p) {
            if (p->next && p->val == p->next->val) {
                ListNode *temp = p->next;
                p->next = temp->next;
                delete temp;
            } else
                p = p->next;
        }
        return head;
    }
};