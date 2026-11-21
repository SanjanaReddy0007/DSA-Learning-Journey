
queue<int>QReversal(queue<int>&q) {
    stack<int>stk;

    while(!q.empty()) {
        stk.push(q.front());
        q.pop();
    }

    queue<int>u;
    while(!stk.empty()) {
      u.push(stk.top());
      stk.pop();
    }

    return u;

}

