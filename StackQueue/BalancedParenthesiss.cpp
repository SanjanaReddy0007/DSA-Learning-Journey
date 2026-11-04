
bool balancedParenthesis(string s){
      stack<char>st;

      for(int i = 0; i < s.length(); i++) {
           if(s[i] == '[' || s[i] == '{' || s[i] == '(') {
              stk.push(s[i]);
           } else {
            if(s.empty()) {
                return false;
             } else {
                char x = stk.top();
                stk.pop();
                if((x == '(' && s[i] == ')') || (x == '{' && s[i] == '}') || (x == '[' && s[i] == ']')) {
                    continue;
                } else {
                    return false;
                }
             }
           }
      }

      return stk.empty();
}


