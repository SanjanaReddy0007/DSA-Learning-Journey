
int mostwater(vector<int>&arr)
{
    int n = arr.size();
    int maxWater = 0;
    int i = 0, j = n - 1;

    while(i < j) {
        int water = (j - i) * min(arr[i] , arr[j]);
        maxWater = max(water , maxWater);

        if(arr[i] < arr[j]) {
            i++;
        } else {
            j--;
        }
    }

    return maxWater;
}

