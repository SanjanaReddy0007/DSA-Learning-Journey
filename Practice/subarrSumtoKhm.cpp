
int countMost(vector<int>&arr, int k)
{
    int n = arr.size();
    int sum = 0, ans = 0;

    if(k < 0) return 0;
    int i = 0, j = 0;
    
    while(j < n) {
        sum += arr[j];
        
        while(sum > k) {
            sum -= arr[i];
            i++;
        }

        ans += j - i + 1;
        j++;
    }

    return ans;

}

int subarrSumtoK(vector<int>&arr, int k)
{
    return countMost(arr, k) - countMost(arr, k - 1);
}

