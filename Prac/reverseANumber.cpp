
int reverseANumber(int num)
{
    int x = 0;

    while(num != 0) {
        int last = num % 10;
        x = x * 10 + last;
        num = num / 10;
    }
    return x;
}

