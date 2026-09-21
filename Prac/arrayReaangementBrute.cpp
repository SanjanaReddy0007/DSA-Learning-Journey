
vector<int>ArrayRearrangement(vector<int>&arr) {

    int n = arr.size();
    vector<int>pos;
    vector<int>neg;

    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) {
            pos.push_back(arr[i]);
        } else {
            neg.push_back(arr[i]);
        }
    }

    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            arr[i] = pos[i / 2];
        } else {
            arr[i] = neg[i / 2];
        }
    }

    return arr;

}

