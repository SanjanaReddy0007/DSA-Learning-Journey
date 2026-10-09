
string ReverseTool(string s) {
    stack<char>s;

    for(char c : s) {
       s.push(c);
    }

    string res = "";

    while(!s.empty()){
       res += s.top();
       s.pop();
    }

    return res;

}

