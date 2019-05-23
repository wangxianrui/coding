
struct ListNode {
    int val;
    struct ListNode *next;

    ListNode(int x) :
            val(x), next(NULL) {
    }
};

class Solution {
public:
    ListNode *ReverseList(ListNode *pHead) {
        if (!pHead || !pHead->next)
            return pHead;
        ListNode *curNode = pHead->next;
        pHead->next = NULL;
        while (curNode) {
            ListNode *temp = curNode;
            curNode = curNode->next;
            temp->next = pHead;
            pHead = temp;
        }
        return pHead;
    }
};