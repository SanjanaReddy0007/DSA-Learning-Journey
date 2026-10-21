
int minOperationToSortAString(string s) {
    int n = s.length();
    char mx = 'a' , mini = 'z';

    if(n == 2) {
        return -1;
    }

    for(int i = 0; i < n; i++) {
        mx = max(mx , s[i]);
        mini = min(mini , s[i]);
    }

    if(s[0] == mini || s[n - 1] == mx) {
        return 1;
    }

    for(int i = 1; i <= n - 1; i++) {
        if(mx == s[i] || mini == s[i]) {
            return 2;
        }
    }

    return 3;

}

//O(n)
//SC :- O(1)
