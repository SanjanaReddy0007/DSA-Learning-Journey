

int fibbonacci(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    
    vector<long long>dp(n + 1, -1);
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

//OPTIMAL SPACE
int fibonacci(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
   
    int last_1 = 1;
    int last_2 = 0;
    int cur = 0;

    for(int i = 2; i <= 2; i++) {
        cur = last_1 + last_2;
        last_2 = last_1;
        last_1 = cur;
    }

    return cur;

}



