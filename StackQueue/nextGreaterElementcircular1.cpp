
vector<int>nextGreaterElemntCircualr(vector<int>&arr1) {
    int n = arr1.size();
    vector<int>ans(n,-1);

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[j % n] > arr[i]) {
                arr[i] = ans[j % n];
                break;
            }
        }

        return ans;s
    }

}

//TC :- O(n^2) sc :-O(n)
