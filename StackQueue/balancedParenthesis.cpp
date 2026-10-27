
bool balanceParenthesis(string s) {
    int n = s.length();
    stack<char>st;
 
    for(int i = 0; i < n; i++) {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
            st.push(s[i]);
        } else {
            if(st.empty()) {
                return false;
            } else {
                int x = st.top();
                st.pop();
                if((x == '(' && s[i] == ')') || (x =='[' && s[i] == ']') || (x == '{' && s[i] == '}')) {
                    continue;
                } else {
                    return false;
                }
            }
        }
    }

    if(st.empty()) {
        return true;
    } else {
        return false;
    }

}

