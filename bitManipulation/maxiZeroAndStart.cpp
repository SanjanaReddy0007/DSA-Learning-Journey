long long maxAndZeroBrute(long long endVal) {
    int curr = endVal;

    for(int i = endVal; i >= 0; i--) {
        curr &= i;
        if(currand == 0) {
            return i;
        }
    }
    return 0;
}

for(int i = endVal; i >= 0; i--) {
    long long curr = i;
    for(int j = i + 1; j <= endVal; j++) {
        curr &= j;
    }
    if(curr == 0) {
        return i;
    }
} 

return 0;

