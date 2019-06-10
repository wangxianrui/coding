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
    ListNode *partition(ListNode *head, int x) {
        if (!head)
            return nullptr;
        ListNode *head1, *head2, *tail1, *tail2;
        head1 = new ListNode(0);
        tail1 = head1;
        head2 = new ListNode(0);
        tail2 = head2;
        ListNode *p = head;
        while (p) {
            if (p->val < x) {
                tail1->next = p;
                tail1 = p;
            } else {
                tail2->next = p;
                tail2 = p;
            }
            p = p->next;
        }
        tail1->next = head2->next;
        tail2->next = nullptr;
        return head1->next;
    }
};