
int f(int arr[] , int n) {
    
    int p2 = arr[0];
    if(n == 1) return p2;
    int p1 = max(arr[0] , arr[1]);

    for(int i = 2; i <= n - 2; i++) {
        int pick = arr[i] + p2;
        int non = p1;
        int cur = max(pick,non);
        p2 = p1;
        p1 = cur;
    }

    return p1;

}

