
class Stack{
    public:
       queue<int>q;

    void push(int x) {
        int n = q.size();
        q.push(x);
        for(int i = 0; i < n; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    void pop() {
        if(!q.empty()) {
            q.pop();
        }
    }

    int top() {
        if(!q.empty()) {
            return q.front();
        }
        return -1;
    }

    int size() {
        return q.size();
    }

}

