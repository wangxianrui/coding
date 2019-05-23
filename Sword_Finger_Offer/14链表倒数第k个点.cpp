
struct ListNode {
    int val;
    struct ListNode *next;

    ListNode(int x) :
            val(x), next(NULL) {
    }
};

class Solution {
public:
    ListNode *FindKthToTail(ListNode *pListHead, unsigned int k) {
        ListNode *fast = pListHead;
        unsigned int index = 0;
        while (index < k) {
            if (!fast)
                return NULL;
            fast = fast->next;
            index++;
        }
        ListNode *slow = pListHead;
        while (fast) {
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }
};