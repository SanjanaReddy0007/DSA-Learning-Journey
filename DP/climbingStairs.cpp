
int climbingStaris(int n) {
    if(n == 0) return 1;
    if(n == 1) return 1;
    int left = climbingStairs(n - 1);
    int right = climbingStairs(n - 2);

    return left + right;

}

