int prefixEquilizationMoves(vector<int>&prefixes) {
    int n = prefixes.size();
    int count = 0;

    for(int i = n - 1; i >= 1; i--) {
       if(values[i] != values[i - 1]) {
           count++;
       }
    }

    return count;
}

