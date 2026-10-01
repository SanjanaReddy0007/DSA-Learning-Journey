
int swapWithMinimum(int arr[] , int n)
{
    vector<int>Sortedarr = arr;
    sort(Sortedarr.begin() , Sortedarr.end());
    
    unordered_map<int,int>pos;
    for(int i = 0; i < n; i++) {
        pos[Sortedarr[i]] = i;
    }

    int swaps = 0, i = 0;
    while(i < n) {
        if(pos[arr[i]] == i) {
            i++;
        } else {
            int temp = pos[arr[i]];
            swap(arr[i] , arr[temp]);
            swaps++;
        }
    }

    return swaps;

}

