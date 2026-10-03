
int intrestingDigit(int num) {
    return (num / 10) + (num % 9 == 0 ? 1 : 0);
}

