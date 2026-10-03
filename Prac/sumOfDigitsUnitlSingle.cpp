int sumOfDigitsUnitlSingle(int num) {
    int n = nums.size();
    
    while(num != 0 || sum > 9) {
      
        if(num == 0) {
            num = sum;
            sum = 0;
        }

        sum += num % 10;
        num /= 10;
    }

    return sum;

}

