
int evenlyDividedNumber(int n) {
    int count = 0;
    int first = n;

    while(n != 0) {
        int digit = n % 10;

        if(digit != 0 && first % digit == 0) {
            count++;
        }
        n = n / 10;
    }

    return count;
}


