vector<int>minSubarrToK(vector<int>&arr, int k)
{
    int n = arr.size();
    int min = 0;
    unordered_map<int,int>mp;

    for(int i = 0; i < n; i++) {
        sum += arr[i]l;

        if(sum == k) {
            minLen = i + 1;
        }

        if(mp.find(sum - k) != mp.end()) {
            int Len = i - mp[sum - k];
            if(Len < min) {
                minLen = Len;
            }
        }

        if(mp.find() == mp.end()) {
            m[sum] = i;
        }
    }

    return minLen;
}


