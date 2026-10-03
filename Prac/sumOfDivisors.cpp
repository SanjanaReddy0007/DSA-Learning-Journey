
int sumOfDivisors(int num) {
    int sum = 0;

    for(int i = 1; i*i <= num; i++) {
        if(num % i == 0) {
            if(num / i == i) sum += i;
            else sum += (num / i + i);
        }
    }

    return sum;
}


