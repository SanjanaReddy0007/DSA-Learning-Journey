
void factorialSequence(int n) {
    if(n == 1) return 1;

    vector<long long> res = factorialSequence(n - 1);
    res.push_back(n * res.back());

    return res;

}

