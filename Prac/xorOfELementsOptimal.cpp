
long long xorOfElements(vecotr<int>&arr , int k)
{
    int n = arr.size();
    int xorr = 0;
    unordered_map<int, int>m;
    int count = 0;

    for(int i = 0; i < n; i++) {
        xorr = xorr ^ arr[i];
        int x = xorr ^ k;
        count += m[x];
        m[xorr]++;
    }

    return count;

}

