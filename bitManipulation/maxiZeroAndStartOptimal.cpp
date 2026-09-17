
long long maximumZeroandOr(long long endVal) {

    endVal |= (endVal >> 1);
    endVal |= (endVal >> 2);
    endVal |= (endVal >> 4);
    endVal |= (endVal >> 8);
    endVal |= (endVal >> 16);
    endVal |= (endVal >> 32);
    return endVal >> 1;
}


