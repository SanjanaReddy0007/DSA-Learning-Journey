
int gcd(int a, int b) {
    while(b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int lcmOfTwo(int a, int b) {
    return (a * b) / gcd(a , b);
}


