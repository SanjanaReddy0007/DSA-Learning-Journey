
int numbersBetween(int n1,int n2) {

    int sum = 0;
    for(int i = n1; i <= n2; i++) {
        int num = i;

        while(num != 0) {
            sum += num % 10;
            num /= 10;
        }
    }

    return sum;
}



