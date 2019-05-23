struct ListNode {
    int val;
    struct ListNode *next;

    ListNode(int x) :
            val(x), next(NULL) {
    }
};

class Solution {
public:
    ListNode *FindFirstCommonNode(ListNode *pHead1, ListNode *pHead2) {
        int length1 = FindLength(pHead1);
        int length2 = FindLength(pHead2);
        ListNode *p1 = pHead1, *p2 = pHead2;
        if (length1 > length2)
            p1 = WalkBefore(p1, length1 - length2);
        else if (length2 > length1)
            p2 = WalkBefore(p2, length2 - length1);
        while (p1 && p2) {
            if (p1 == p2)
                return p1;
            p1 = p1->next;
            p2 = p2->next;
        }
        return nullptr;
    }

    int FindLength(ListNode *head) {
        int length = 0;
        ListNode *p = head;
        while (p) {
            length++;
            p = p->next;
        }
        return length;
    }

    ListNode *WalkBefore(ListNode *head, int length) {
        for (int i = 0; i < length; i++)
            head = head->next;
        return head;
    }
};
