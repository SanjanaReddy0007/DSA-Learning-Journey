
bool search(vector<int>&arr , int next) {
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == next) {
            return true;
        }
    }
    return false;
}

int longestConsecutive(vector<int>&arr)
{
    int n = arr.size();
    int ans = 0;

    for(int i = 0; i < n; i++) {
        int count = 0;
        int next = arr[i ] + 1;

        while(search(arr,next)) {
             count++;
             next++;
        }

        ans = max(ans , count);
    }

    return ans;

}

