
string decodeString(string s) {
    int n = s.length();
    stack<char,int>stk;

    for(int i = 0; i < n; i++) {
        if(s[i] == ']') {
            string decodeString = "";
           
            while(stk.top() != '[') {
                decodeString = stk.top() + decodeString;
                stk.pop();
            }

            int base = 1, k = 0;
            while(!stk.empty() && isdigit(stk.top())) {
                k = k + (stk.top() - '0') * base;
                stk.pop();
                base *= 10;
            }

            while(k--) {
                for(char c : decodeString) {
                    stk.push(c);
                }
            }
        } else {
            st.push(s[i]);
        }
    }

    string res = "";
    while(!stk.empty()) {
        res = stk.top() + res;
        stk.pop();
    }

    return res;
}




