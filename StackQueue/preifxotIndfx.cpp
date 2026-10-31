class solution {
public:
    bool isOperand(char c) {
        return isalpha(c) || isdigit(c);
    }

    string prefixToInfix(string s) {
        stack<string> stk;
        int n = (int)s.length();

        for (int i = n - 1; i >= 0; i--) {
            if (isOperand(s[i])) {
                stk.push(string(1, s[i]));
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
};



