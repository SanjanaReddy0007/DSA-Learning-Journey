
class solution{
    public:

    int priority(char ch) {
        if(ch == '^') return 3;
        if(ch == '*' || ch == '/') return 2;
        if(ch == '+' || ch == '-') return 1;
        return -1;
    }

    bool isOperand(char ch) {
        return isalpha(ch) || isdigit(ch);
    }

    int infixtoPostfix(string s) {
        stack<char>st;
        string output = "";

        for(char ch : s) {
            if(isOperand(ch)) {
                output += ch;
            } else if(ch == '(') {
                stk.push(ch);
            } else if(ch == ')') {
                while(!stk.empty() && stk.top() != '(') {
                    output += stk.top();
                    stk.pop();
                }
                stk.pop();
            } else {
                while(!stk.empty() && (priority(ch) < stk.top() ||  priority(ch) == priority(stk.top()) && ch != '^' )) {
                    output += stk.top();
                    stk.pop();
                }
                stk.pop();
            }
        }

        while(!stk.empty()) {
            output += stk.top();
            stk.pop();
        }
       return output;
    }

}
