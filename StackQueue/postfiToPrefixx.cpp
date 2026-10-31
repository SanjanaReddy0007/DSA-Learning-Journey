
class solution {
public:
  
   bool isOperand(char c) {
       return isdigit(c) || isalpha(c);
   }
  
    string postfixToPrefix(string &s) {
      // Write your code here..
      stack<string>stk;
      
      for(char ch : s) {
          if(isOperand(ch)) {
              stk.push(string(1,ch));
          } else {
              string rightPart = stk.top();
              stk.pop();
              
              string leftPart = stk.top();
              stk.pop();
              
              stk.push(string(1,ch) + leftPart + rightPart);
          }
      }
      
      return stk.top();
    }
};


