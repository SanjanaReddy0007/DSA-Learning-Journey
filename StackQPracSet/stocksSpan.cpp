
vector<int>stoackSPans(vector<int>&spans,  int m) {
    vector<int>sp;
    stack<int>st;

    for(int i = 0; i < m; i++) {
        while(!st.empty() && st.top() <= spans[i]) {
            st.pop();
        }

        if(st.empty()) {
            sp.push(i + 1);
        } else {
            sp.push(st.top() - i);
        }
        st.push(i);
    }

    return sp;

}

