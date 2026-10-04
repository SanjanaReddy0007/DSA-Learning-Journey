
int gcd(int a, int b) {

    while(a != 0 || b != 0) {
        if(a >= b) {
            a = a % b;
        } else {
            b = b % a;
        }
    }

    if(a == 0) {
        return b;
    } else {
        return a;
    }

}


int gcdOfArr(int arr[] , int n) {
    int res = arr[0];

    for(int i = 1; i < n; i++) {
        res = gcd(res , arr[i]);

        if(res == 1) return res;
    }

    return res;

}

