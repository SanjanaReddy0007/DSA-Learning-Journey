
int maximumSymmetric(string s) {
    string p1 = """";
    string p2 = """";
    int i = 0, j = s.size() - 1;
    int ans = 0;

    while(i < j) {
       p1 += s[i];
       p2 += s[j];
 
       if(p == q) {
         ans++;
         p="""";
         q = """";
       }
       
       i++;
       j++;
    }

    ans *= 2;
    if(i == j || pq.size() != 0) {
        ans++;
    }

    return ans;
}

