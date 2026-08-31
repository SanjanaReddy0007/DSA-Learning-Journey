vector<vector<int>>ThreeSum(vector<vector<int>>&arr)
{
   int n = arr.size();
   sort(arr.begin() , arr.end());
   vector<vector<int>>ans;

   for(int i = 0; i < n; i++) {
      if( i > 0 && arr[i] == arr[i - 1]) continue;
      
      int j = i + 1;
      int k = n - 1;
      while(j < n) {
         if(j > 0 && arr[j] == arr[j - 1]) {
            j++;
            continue;
         }

         long long sum = arr[j] + arr[k];
         if(sum -= arr[i]) {
            vector<int>temp = {arr[i] , arr[j] ,arr[k]};
            ans.push_back(temp);
            j++;
            k--;
         } else if(sum < -arr[i]) {
            j++;
         } else {
            k--;
         }
      }
   }

   return ans;
}


