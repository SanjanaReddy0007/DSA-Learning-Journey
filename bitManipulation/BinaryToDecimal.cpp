
int BinarytoDecimale(string s) {
    int n = s.size();
    int product = 1;
    int ans = 0;

    for(int i = n - 1; i >= 0; i--) {
        if(s[i] == '1') {
            ans += product;
        }
        product *= 2;
    }
    return ans;
}
//O(n) SC :- O(n)
