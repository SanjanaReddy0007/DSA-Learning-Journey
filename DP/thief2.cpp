
int helper(int start, int end , int arr[]) {
    int p2 = 0 , p1 = 0;

    for(int i = start; i < end; i++) {
       int temp = p1;
       p1 = max(p1 , arr[i] + p2);
       p2 = temp;
    }

    return p1;

}

int theif2(int n, int arr[]) {
    if(n == 1) return arr[0];
    return max(helper(0, n - 2, arr) , helper(1 , n - 1, arr));
}


