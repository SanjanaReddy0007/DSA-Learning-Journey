 int subarrWithXOR(vector<int>&arr) {
    int n = arr.size();
    int count = 0;
    int xor = 0;
     
    unordered_map<int,int>m;

    for(int i = 0; i < n; i++) {
         xor = xor ^ arr[i];
         int x = xor ^ k;
         count += m[x];
         m[xor]++;
    }

    return count;
 }

