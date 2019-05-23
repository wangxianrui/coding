class Solution {
public:
    void push(int value) {
        array.push(value);
        if (min_array.empty() || value <= min_array.top())
            min_array.push(value);
    }

    void pop() {
        int value = array.top();
        array.pop();
        if (value == min_array.top())
            min_array.pop();
    }

    int top() {
        return array.top();
    }

    int min() {
        return min_array.top();
    }

private:
    stack<int> array;
    stack<int> min_array;
};