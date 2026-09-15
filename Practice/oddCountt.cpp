int oddCounts(vector<int>&arr) {
     int n = arr.size();
     int oddCount = 0 , validCount = 0;

     int left = 0 , ans = 0;

     for(int right = 0; right < n; right++) {
        if(arr[right] % 2 == 1) {
            oddCount++;
            validCount = 0;
        }

        while(oddCount == k) {
            validCount++;

            if(arr[left] % 2 == 1) {
                oddCount--;
            }

            left++;
        }

        ans += validCount;
     }

     retrun ans;

}


