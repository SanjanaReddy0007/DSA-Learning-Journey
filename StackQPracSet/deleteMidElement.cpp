
int delete_mid(stack<int>&s, int sizeOf, int ind) {
    if(ind == sizeOf / 2) {
        s.pop();
        return;
    }

    int x = s.top();
    s.pop();
    delete_mid(s,sizeOf,ind + 1);
    s.push(x);
}

stack<int>deleteMidElement(stack<int>&s, int sizeOf) {
    delete_mid(s,size,0);
    return s;
}

