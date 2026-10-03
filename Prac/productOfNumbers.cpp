
int productOfNumbers(int num) {
    
    int product = 1;
    while(num != 0) {
        int last = num % 10;
        product *= last;
        num /= 10;
    }

    return product;
}


