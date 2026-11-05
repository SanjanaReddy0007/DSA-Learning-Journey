
bool isOperand(char ch) {
    return isalpha(ch) || isalnum(ch);
}

string infixToPrefix(string s) {
    stack<string>stk;
    int n = s.size();

    for(int i = n - 1; i >= 0; i--) {
        if(isOperand(s[i])) {
            stk.push(string(s[i]));
        } else {
            string leftPart = stk.top();
            stk.pop();

            string rightPart = stk.top();
            stk.pop();

            stk.push("(" + leftPart + s[i] + rightPart + ")");
        }
    }
    
    return stk.top();
}


