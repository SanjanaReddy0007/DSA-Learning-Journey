

int jumpFrog(int n, int arr[]) {
    int prior1 = abs(arr[0] - arr[1]), prior2 = 0;
    int cur = 0;
    if(n == 0) return 0;
    if(n == 1) return abs(arr[0] - arr[1]);

    for(int i = 2; i <= n; i++) {
        int s1 = abs(arr[i] - arr[i - 1]) + prior1;
        int s2 = abs(arr[i] - arr[i - 2]) + prior2;
        cur = min(s1 , s2);
        prior2 = prior1;
        prior1 = cur;
    }

    return cur;

}



