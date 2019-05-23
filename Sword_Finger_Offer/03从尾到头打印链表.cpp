#include <iostream>
#include <vector>

using namespace std;


struct ListNode {
    int val;
    struct ListNode *next;

    ListNode(int x) :
            val(x), next(NULL) {
    }
};

class Solution {
public:
    vector<int> printListFromTailToHead(ListNode *head) {
        if (head == NULL) {
            return {};
        }
        ListNode *p = head->next;
        head->next = NULL;
        while (p) {
            ListNode *temp = p;
            p = p->next;
            temp->next = head;
            head = temp;
        }
        vector<int> result;
        while (head) {
            result.push_back(head->val);
            head = head->next;
        }
        return result;
    }
};