int sumbarrsumTokOptimal(vector<int>&arr, int k) {
   int n = arr.size();
   int sum = 0, count = 0;
   unordered_map<int,int>m;

   for(int i = 0; i < n; i++) {
       sum += arr[i];

       if(sum == k) count++;

       count += m[sum - k];
      m[sum]++;
   }

   return count;
}

