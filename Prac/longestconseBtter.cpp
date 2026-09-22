
int longestConsecutiveSequence(vector<int>&arr) {
    int n = arr.size();
    sort(arr.begin() , arr.end());

    if(n == 0) return 0;
    if(n == 1) return 1;

    int count = 1;
    int ans = 1;
    for(int i = 0; i < n; i++) {
        if(arr[i] - arr[i - 1] == 1) {
            count++;
            ans = max(ans , count);
        } else if(arr[i] == arr[i - 1]) {
            continue;
        } else {
            count = 1;
        }
    }

    return ans;



