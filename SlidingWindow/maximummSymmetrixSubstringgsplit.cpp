
int maximumcountt(string s) {
    
    int n = s.size();
    string p = "" , q = "";
    int i = 0, j = n - 1;
    int ans = 0;

    while(j < n) {
        p += s[j];
        q = s[j] + q;

        if(p == q) {
            ans++;
            p = """";
            q = """";
        }
       i++;
       j--;
    }

    ans *= 2;
    if(s.size() != 0) ans += 1;
    return ans;
}


