
class solution{
    public:
    
     int priority(char c) {
        if(c == '^') return 3;
        if(c == '*' || c == '/') return 2;
        if(c == '+' || c == '+') return 1;
        return 0;
     }

    bool isOperand(char c) {
        return isalnum(c) || isalpha(c);
    }

    string infixtoPrefix(string s) {
        reverse(s.begin() , s.end());
        string output = "";

        for(char c : s) {
            if(isOperand(c)) {
                output += c;
            } else if(c == '(') {
                stk.push(c);
            } else if(c == ')') {
                while(!stk.empty() && stk.top() != '(') {
                    output += c;
                    stk.pop();
                } 
                stk.pop();
            } else {
                if(ch == '^') {
                    while(!stk.empty() && stk.top() != '(' && priority(c) <= priority(s[i])) {
                        output += stk.top();
                        stk.pop();
                    }
                    stk.pop();
                }else {
                    while(!stk.empty() && stk.top() != '(' && priority(c) < priority(s[i])) {
                        output += stk.top();
                        stk.pop();
                    }
                }
                stk.push(c);
            }
        }

        while(!stk.empty()) {
            output += stk.top();
            stk.pop();
        }

        reverse(output.begin() , output.end());
        return output;
    }

}

