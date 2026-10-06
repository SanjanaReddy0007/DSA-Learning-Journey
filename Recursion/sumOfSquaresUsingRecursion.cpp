
void sumOfSquaresUsingRecursion(int n ) {
     if(n == 1) return 1;
     return n * n + sumOfSquaresUsingRecursion(n - 1);
}

