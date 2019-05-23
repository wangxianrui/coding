
struct ListNode {
    int val;
    struct ListNode *next;

    ListNode(int x) :
            val(x), next(NULL) {
    }
};

class Solution {
public:
    ListNode *Merge(ListNode *pHead1, ListNode *pHead2) {
        ListNode *head = new ListNode(0);
        ListNode *tail = head;
        while (pHead1 && pHead2) {
            if (pHead1->val <= pHead2->val) {
                tail->next = pHead1;
                tail = pHead1;
                pHead1 = pHead1->next;
            } else {
                tail->next = pHead2;
                tail = pHead2;
                pHead2 = pHead2->next;
            }
        }
        if (pHead1)
            tail->next = pHead1;
        if (pHead2)
            tail->next = pHead2;
        return head->next;
    }
};