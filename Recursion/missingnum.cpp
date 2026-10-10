
for(int i = 0; i < n; i++) {
    int xor1 = xor1 ^ i;
    int xor2 = xor2 ^ arr[i];
    return xor1 ^ xor2 ^ n;
}


