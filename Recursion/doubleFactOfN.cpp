
void doubleFactorialOfN(int n) {

    if(n == 1 || n == 2) return n;
    return n * doubleFactorialOfN(n - 2);
}

