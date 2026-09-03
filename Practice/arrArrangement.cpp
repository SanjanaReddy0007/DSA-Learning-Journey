vector<int>arrayRearrnagement(vector<int>&arr, int n)
{
    vector<int>positives;
    vector<int>negatives;

    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) {
            positives.push_back(arr[i]);
        } else {
            negatives.push_back(arr[i]);
        }
    }

    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            arr[i] = positives[i / 2];
        } else {
            arr[i] = negative[i / 2];
        }
    }

}
