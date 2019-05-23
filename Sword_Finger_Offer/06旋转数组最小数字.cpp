#include <iostream>
#include <vector>
#include <stack>

using namespace std;


class Solution {
public:

    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        int node;
        if (!stack2.empty()) {
            node = stack2.top();
            stack2.pop();
        } else {
            while (!stack1.empty()) {
                node = stack1.top();
                stack1.pop();
                stack2.push(node);
            }
            node = stack2.top();
            stack2.pop();
        }
        return node;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};
