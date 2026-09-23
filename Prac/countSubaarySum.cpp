
bool countSubaarysum(vector<int>&arr, int m) {
    int n = arr.size();
    unordered_map<int,int>m;
    
    m[0] = -1;
    for(int i = 0; i < n; i++) {
        int prefixSum = (prefixSum + arr[i]) % m;

        if(m.find(prefixSum) != m.end()) {
            if(i - m[preifxSum] > 1) {
                return true;
            }
        } else {
            return false;
        }
    }

    return false;

}


