
bool search(vector<int>&arr, int x) {
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            return true;
        }
    }

    return false;
}


vector<int>longestconsecutiveSequence(vector<int>&arr)
{
    int n = arr.size();
    int ans = 0;

    for(int i = 0; i < n; i++) {
        int count = 1;
        int next = arr[i] + 1;

        while(search(arr,next)) {
            count++;
            next++;
        }

        ans = max(ans, count);
    }

    return ans;
}

