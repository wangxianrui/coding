//
// Created by wangxr337 on 2019/5/23.
//

class Solution {
public:
    ListNode *reverseBetween(ListNode *head, int m, int n) {
//        pay attention to m == 1
        ListNode *new_head = new ListNode(0);
        ListNode *m_head = new_head;
        m_head->next = head;
        for (int i = 1; i < m; i++) {
            m_head = m_head->next;
        }

        ListNode *first = m_head->next;
        ListNode *temp;
        for (int i = m; i < n; i++) {
            temp = first->next;
            first->next = first->next->next;
            temp->next = m_head->next;
            m_head->next = temp;
        }
        return new_head->next;
    }
};