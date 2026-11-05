
class Solution{
    public:
       
    int isOperand(char ch) {
       return isalpha(ch) || isdigit(ch);
    }
    
      string postfixtoInfix(string s) {
        stack<string>stk;

          for(char ch : s) {
            if(isOperand(ch)) {
                stk.push(ch);
            } else {
                string right = stk.top();
                stk.pop();
                string left = stk.top();
                stk.pop();
                stk.push("(" + left + ch + right + ")");
            }
          }
           
          return stk.top();
      }

}


