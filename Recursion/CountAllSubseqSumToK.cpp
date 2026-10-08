
int Subsequence(int i, int arr[] , int sum ,int n, int k) {
    if(i >= n) {
        if(sum == k) {
            return 1;
        }
        return 0;
    }

    sum += arr[i];
    int left = Subsequecne(i + 1, arr, sum, n,k);

    sum -= arr[i];
    int right = Subsequence(i + 1, arr ,sum, n ,k);

    return left + right;
}


int findSubSequencesWithSumK(int arr[], int n, int k) {
        return Subsequence(i,arr,sum,n,k);
 }

