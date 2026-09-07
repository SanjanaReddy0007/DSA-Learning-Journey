
int XorToN(int n) {
    int rem = n % 4;

    if(rem == 1) return 1;
    if(rem == 0) return n;
    if(rem == 2) return n + 1;
    return 0;
}

int calculateXor(int left, int right) {
    return XorToN(right) - XorToN(left - 1);
}

