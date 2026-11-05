
bool isOperand(char ch) {
    return isalpha(ch) || isdigit(ch);
}

string postfixtoPrefix(string &s) {
    stack<string>stk;

    for(char ch : s) {
        if(isOperand(ch)) {
            stk.push(string(1,ch));
        } else {
            string right = stk.top();
            stk.pop();

            string left = stk.top();
            stk.pop();

            stk.push(string(ch) + left + right);
        }
    }

    return stk.top();
}


