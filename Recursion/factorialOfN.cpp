
void factorialOfN(int n) {
    if(n == 1 || n == 0) return 1;
    return factoralOfN(n - 1) * (n);
}

