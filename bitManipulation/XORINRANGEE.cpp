
int xorToOne(int num) {
    int n = num % 4;

    if(n == 0) return num;
    if(n == 1) return 1;
    if(n == 2) return num + 1;
    return 0;
}


int xorInRange(int left, int right)
{
    return xorToOne(right) ^ xorToOne(left - 1);
}

//TC : O(1)
//SC :- O(1)
