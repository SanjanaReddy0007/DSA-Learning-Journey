int addNumsWithoutUsingSigns(int a, int b) {
    
    while(b != 0) {
        int carry = a ^ b;
        int result = (a & b) << 1;
        a = result;
        b = carry;
    }

    return a;
}

//TC :- O(1) -: SC

