
int getVal(int val) {
    return __builtin_popcount(val % 2);
}


long long countTripletsValues(vector<int>&first, vector<int>&second, vector<int>&third)
{
    int firstEven = 0, firstOdd = 0;
    int secEven = 0, secOdd = 0;
    int thirdEven = 0, thirdOdd = 0;

    for(int i = 0; i < first.size(); i++) {
        if(getVal(first[i]) == 0) {
            firstEven++;
        } else {
            firstOdd++;
        }
    }


    for(int i = 0; i < second.size(); i++) {
        if(getVal(second[i]) == 0) {
            secEven++;
        } else {
            secOdd++;
        }
    }

    for(int i = 0; i < n; i++) {
        if(getVal(third[i]) == 0) {
            thirdEven++;
        } else {
            thirdOdd++;
        }
    }

    return firstEven * secEven * thirdEven + 
    firstEven * secOdd * thirdOdd + 
    firstOdd * secEvn * thirdOdd + 
    firstOdd * secOdd * thirdEvn;
}

