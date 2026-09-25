
long long xorOfElements(vector<int>&arr, int k)
{
    int n = arr.size();
    int count = 0;

    for(int i = 0; i < n; i++) {
        int xorr = 0;
        for(int j = i + 1; j < n; j++) {
            xorr = xorr ^ arr[j];
            if(xorr == k) {
                count++;
            }
        }
    }

    return count;
}

