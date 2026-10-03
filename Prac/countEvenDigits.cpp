
int countEvenDigits(int n) {
    int even = 0;
    int total = 0;

    while(n != 0) {
        int digit = n % 10;

        if(digit % 2 == 0) {
            even++;
            total++;
            n /= 10;
        }

    }
         if(even == total) {
            return "Yes";
        } else {
            return "Nooo";
        }
     
}


