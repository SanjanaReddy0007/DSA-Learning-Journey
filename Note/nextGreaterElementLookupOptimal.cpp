
//NEXT GREATER ELEMENT LOOUPPP...........

vector<int>nextGreaterLookupOptimal(vector<int>&num1, vector<int>&num2) {
    int n = num1.size();
    vector<int>res(n,-1);
    unordered_map<int,int>m;
    stack<int>s;

    for(int i = 0; i < num2.size(); i++) {
        while(!stk.empty() && num2[i] > stk.top()) {
            mp[stk.top()] = num2[i];
        }
        stk.push(num2[i]);
    }

    for(int i = 0; i < num1.size(); i++) {
        if(m.find(num1[i]) != m.end()) {
            res[i] = m[num1[i]];
        }
    }

    return res;
}

//O(n1 + n2) TC
//sc :- O(n2)
