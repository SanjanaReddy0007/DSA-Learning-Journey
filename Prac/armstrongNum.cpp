
int armsStringNumber(int num) {
    //a num whch sum of dogits is raised to the  power of the all digits

    int n = log10(num) + 10;
    int sum = 0;

    while(num != 0) {
        int last = num % 10;
        sum += pow(last , n);
        num /= 10;
    }

    if(n1 == sum) {
        return "Armstrong number";
    } else {
        return "Not at all";
    }

}

