
void GenerateFibonacciSeries(int k, vector<int>&start , int n) {
    if(n == start.size()) return start;

    int nextSum = 0;
    for(int i = k - s.size(); i < n; i++) {
        nextsum += start[i];
    }

    start.push_back(nextsum);
    GenerateFibonacciSeries(k , start , n);

}

//TC :- O(N * K)
//SC :- O(N)

