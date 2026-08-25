int maxSubarrsumToK(vector<int>&arr , int k) {
   int n = arr.size();
   int maxLnen = 0;

   for(int i = 0; i < n; i++) {
      int sum = 0;
      for(int j = i ; j < n; j++) {
        sum += arr[j];

        if(sum == k ) {
            maxLen = max(j - i + 1, maxLen);
        }
      }
   }

   return maxLen;
}
//this is 2nd optimal O(n^2) 1st using three loops O(n^3)

//optimal using prefix sum
int max = 0;
unordered_map<int,int>mp;
long long sum = 0;

for(int i=0;i<n;i++) {
    sum += arr[i];

    if(sum == k) {
        maxLen = i + 1;
    }

    if(mp.find(sum - k) != m.end()) {
        int Len = i - mp[sum - k];
        if(Len  > maxLen) {
            maxLen = Len;
        }
    }

    if(mp.find() == mp.end()) {
        m[sum] = i;
    }

    return max;

}


