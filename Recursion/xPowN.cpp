
double xPowN(double double x, long long n) {
    if(n == 0) {
        return 1;
    }

    if(n < 0) {
        return 1 / xPowN(x , -n);
    }

    if(n % 2 == 0) {
        double half = xPowN(x , n / 2);
        return half * half;
    }

    return x * xPowN(x , n - 1);
}


