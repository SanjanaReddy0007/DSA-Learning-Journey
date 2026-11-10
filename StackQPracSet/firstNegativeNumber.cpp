
vector<int>FirstNegativeNumber(vector<int>&arr, int m, int len) {
    vector<int>res;

    for(int i = 0; i <= len - m; i++) {
        bool found = false;
        for(int j = i; j < i + m; j++) {
            if(arr[j] < 0) {
                res.push_back(arr[j]);
                found = true;
                break;
            }
        }
        if(!found) {
            res.push_back(0);
        }
    }

    return res;
}

//O(len * m) 
//SC :- O(len - m + 1)



