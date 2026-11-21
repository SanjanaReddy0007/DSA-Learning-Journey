
string removeCharacter(string s, int m) {
    int n = s.size();
 
    stack<pair<char, int>>stk;
    if(m == 1) return "";

    for(int i = 0; i < n; i++) {
        if(s[i] == stk.top().first) {
            stk.top().second++;
            if(stk.top().second == m) {
               stk.pop();
            }
        } else {
            stk.push({ch,1});
        }
    }

    string ans = "";
    while(!stk.empty()) {
        char ch = stk.top().second;
        int num = stk.top().first;
        stk.pop();
        output.append(string(num,ch));
    }

    reverse(output.begin() , output.end());
    return output;
}

//TC && SC :- O(n)



