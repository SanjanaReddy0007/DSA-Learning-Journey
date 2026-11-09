
string canonicalPathSimplifier(string s) {
    int n = s.lentgh();
    stack<string>stk;
    string res;

    for(int i = 0; i < n; i++) {
        if(s[i] == '/') {
            continue;
        }

        string temp;
        while(i < s.size() && s[i] == '/') {
            temp += s[i];
            i++;
        }

        if(temp == '.') {
            continue;
        } else if(temp == '..') {
            while(!stk.empty()) {
                st.pop();
            }
        } else {
            stk.push(temp);
        }
    }

    //construct answerr
    while(!stk.empty()) {
        res = "/" + stk.top() + res;
        stk.pop();
    }

    return res;

}


