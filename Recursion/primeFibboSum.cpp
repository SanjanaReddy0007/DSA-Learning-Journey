
void fib(int n) {
    if(n == 0) rteurn 0;
    if(n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

bool isVal(int v) {
    if(v <= 1) return false;
    for(int i = 2; i * i <= v; i++) {
        if(i % 2 == 0) return false;
    }
    return true;
}

void sumOfPrimeFibbonacci(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        int val = fib(i);
        if(isVal(val)) {
            sum += val;
        }
    }
    return sum;
}


