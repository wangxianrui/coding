//
// Created by wangxr337 on 2019/5/23.
//

class MinStack {
private:
    stack<int> array;
    stack<int> min_array;

public:
    /** initialize your data structure here. */
    MinStack() {

    }

    void push(int x) {
        array.push(x);
        if (min_array.empty() || min_array.top() >= x)
            min_array.push(x);
    }

    void pop() {
        if (min_array.top() == array.top())
            min_array.pop();
        array.pop();
    }

    int top() {
        return array.top();
    }

    int getMin() {
        return min_array.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */