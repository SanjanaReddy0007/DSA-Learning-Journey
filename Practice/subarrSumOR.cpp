int largestSubarrToK(vector<int>&arr) {
    int n = ar.size();
    int or = 0;

    for(int i = 0; i <n ; i++) {
        for(int j = i; j < n; j++) {
            int or = 0;
            for(int k = i; k <= j; k++) {
                xor = xor ^ arr[k];
            }

            if(xor == k) {
               count++;
            }
        }
    }

    return count;
}
