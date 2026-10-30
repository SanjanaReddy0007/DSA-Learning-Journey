
class solution {
public:

    bool isOperand(char c) {
        return isalpha(c) || isdigit(c);
    }

    string postfixToInfix(string s) {
        // Write your code here...
        stack<string>stk;
        
        for(char ch : s) {
            if(isOperand(ch)) {
                stk.push(string(1,ch));
            } else {
                string rightPart = stk.top();
                stk.pop();
                
                string leftPart = stk.top();
                stk.pop();
                
                stk.push("(" + leftPart + ch + rightPart + ")");
            }
        }
        
        return stk.top();
    }
};




