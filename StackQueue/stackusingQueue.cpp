
class Stack {
      queue<int>q;
public:
    void push(int x) {
        //Write your code here...
        int n = q.size();
        q.push(x);
        for(int i = 0; i < n; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    void pop() {
        //Write your code here... 
        if(!q.empty()) {
            return q.pop();
        }
    }

    int top() {
        //Write your code here...
        return q.front();
    }

    bool empty() {
        //Write your code here...
        return q.empty();
    }

    int size() {
        //Write your code here...
        return q.size();
    }
};



