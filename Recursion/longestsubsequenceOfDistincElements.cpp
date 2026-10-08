
int longestSubsequenceOfDistinctElements(vector<int>&arr , int n) {
    unordered_set<int>hashSet;

    for(int i = 0; i < n; i++) {
        hashSet.insert(arr[i]);
    }

    return hashSet.size();
}


