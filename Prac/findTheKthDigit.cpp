
int findTheKthDigit(int A, int B, int k) {
    int power = 1;

    for(int i = 1; i < B; i++) {
        power *= A;
    }

    for(int i = 1; i < k; i++) {
        power = power / 10;
    }

    return power % 10;

}

