
vector<int>Dominent(vector<int>&arr) {
    int n = arr.size();
    vector<int>d;

    for(int i = 0; i < n; i++) {
        bool isD = true;
        for(int j = i + 1; j < n; j++) {
            if(arr[i] < arr[j]) {
                isD = false;
                break;
            }
        }

        if(isD) {
            d.push_back(arr[i]);
        }
    }

    return d;

}


