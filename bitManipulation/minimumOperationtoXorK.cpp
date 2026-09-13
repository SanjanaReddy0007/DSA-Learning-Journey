int minimumOprationToXorK(vector<int>&arr, int k) {
    
    int xor1 = 0;
    for(int i = 0; i < arr.size(); i++) {
        xor1 = xor1 ^ arr[i];
    }

    xor1 ^= k;
    int count = 0;

    while(xor1 != 0) {
        count++;
        xor1 = xor1 & (xor1 - 1);
    }

    return count;
}


