
class solution {
public:
   
   int priority(char c) {
       if(c == '+' || c == '-') {
           return 1;
       }
       if(c == '*' || c == '/') {
           return 2;
       }
       if(c == '^') {
           return 3;
       }
       return 0;
   }

    bool isOperand(char c) {
        return isalpha(c) || isalnum(c);
    }

    string infixToPrefix(string s) {
        //Write your code here...
        reverse(s.begin() , s.end());
        
        for(char& ch : s) {
            if(ch == '(') {
                ch = ')';
            } else if(ch == ')') {
                ch = '(';
            }
        }
        
        stack<char>stk;
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
                if(ch == '^') {
                    while(!stk.empty() && stk.top() != '(' && priority(ch) <= priority(stk.top())) {
                        output += stk.top();
                        stk.pop();
                    }
                } else {
                    while(!stk.empty() && stk.top() != '(' && priority(ch) < priority(stk.top())) {
                        output += stk.top();
                        stk.pop();
                    }
                }
                stk.push(ch);
            }
        }
        
        while(!stk.empty()) {
            output += stk.top();
            stk.pop();
        }
        
        reverse(output.begin() , output.end());
        return output;
    }
};




