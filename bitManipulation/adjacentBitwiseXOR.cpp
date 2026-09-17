
vector<int>MergeAdjacentBIts(vector<int>&vals) {
    int n = vals.size();
    vector<int>Result;

    for(int i = 0; i < n - 1; i++) {
       Result.push_back(vals[i] | vals[i + 1]);
    }

    return Result;

}

