
bool countRepeatedDigits(int num) {
     int count[10] = {0};
     int ans = 0;

     while(num != 0) {
        int last = num % 10;
        count[last]++;
        num /= 10;
     }

    for(int i = 1; i < 10; i++) {
        if(count[i] > 1) {
            ans++;
        }
    }

    return ans;
}


