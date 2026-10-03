
int harshedNumber(int n) {
    //a num which is divided by the sum of its num

    int n1 = n;
    int sum = 0;

    while(n != 0) {
        int last = n % 10;
        sum += last;
        n /= 10;
    }

    if(n1 % sum == 0) {
        return "Yess";
    } else {
        return "NoPe";
    }

}

