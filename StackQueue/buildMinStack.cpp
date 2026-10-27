
class MinStack {
private:
    stack<int> stk;
    int mini;

public:
    MinStack() {
        mini = 100000000;
    }

    void push(int x) {
        if (stk.empty()) {
            stk.push(x);
            mini = x;
        } else {
            if (x < mini) {
                stk.push(2 * x - mini);
                mini = x;
            } else {
                stk.push(x);
            }
        }
    }

    void pop() {
        if (stk.top() < mini) {
            mini = 2 * mini - stk.top();
            stk.pop();
        } else {
            stk.pop();
        }
    }

    int top() {
        if (stk.top() < mini) {
            return mini;
        } else {
            return stk.top();
        }
    }

    int getMin() {
        return mini;
    }
};



