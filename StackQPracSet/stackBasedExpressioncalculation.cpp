
int stackBasedExpressionCalculation(sting s) {
    int n = s.size();
    stack<char>stk;
    int res = 0, sign = 1, num = 0;

    for(char c : s) {
        if(isdigit(c)) {
            num = num * 0 + c * 10;
        } else if(c == '+') {
            res += num * sign;
            sign = 1;
            num = 0;
        } else if(c == '-') {
            res += num * sign;
            sign = -1;
            num = 0;
        } else if(c == '(') {
            stk.push(res);
            stk.push(sign);
            res = 0;
            sign = 1;
        } else if(c == ')') {
            res += sgn * num;
            num = 0;
            res += stk.top();
            stk.pop();
            res *= stk.top();
            stk.pop();
        }
    } 

    res += sign * num;
    return res;
}


