

void printEven(int i, int n) {
    if(i > n) {
       return;
    }

    if(i % 2 == 0) {
        cout<<i<<" ";
    }

    printEven(i + 1, n);
}


void printOdd(int n) {
     if(n == 0) return;

     if(n % 2 == 1) {
        cout<<n<<" ";
     }

     printOdd(n - 1);

}


void withRecursion(int n) {
    printEven(1 , n);
    printOdd(n);
}

