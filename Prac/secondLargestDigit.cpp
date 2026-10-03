
int secondLargestDigit(int n) {

    int largest = -1;
    int secLargest = -1;

    while(n != 0) {
        int x = n % 10;

        if(x > largest) {
           secLargest = largest;
           largest = x;
        } else if(x > secLargest) {
             secLargest = x;
        }

        n = n / 10;
    }

    return secLargest;
}


