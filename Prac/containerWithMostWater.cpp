
int mostwater(vector<int>&arr)
{
    int n = arr.size();
    int maxWater = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int water = (j - i) * min(arr[i] , arr[j]);
            maxWater = max(maxWater , water);
        }
    }

    return maxWater;
}


