
int call(int first, int second, string &str) {
        if(str == "+") return first + second;
        else if(str == "-") return first - second;
        else if(str == "*") return first * second;
        else return first / second;
    }
  
  int evaluateReverseTaskSequence(vector<string>& expression) { 
    //Write Your Code Here...
        stack<int>stk;
        for(string& s : expression) {
            if(s == "+" || s == "-" || s == "*" || s == "/") {
                int second = stk.top();
                stk.pop();
                int first = stk.top();
                stk.pop();
                stk.push(call(first,second,s));
            } else {
                stk.push(stoi(s));
            }
        }
        return stk.top();
   }


   
