class Solution {
public:
    ListNode *EntryNodeOfLoop(ListNode *pHead) {
        if (!pHead || !pHead->next || !pHead->next->next)
            return nullptr;
        ListNode *slow = pHead->next;
        ListNode *fast = pHead->next->next;
        while (slow != fast) {
            if (!fast->next || !fast->next->next)
                return NULL;
            slow = slow->next;
            fast = fast->next->next;
        }
        fast = pHead;
        while (fast != slow) {
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};