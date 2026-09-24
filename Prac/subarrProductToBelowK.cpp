
int subarrProductToBelowK(vector<int>&arr , int k)
{
   int n = arr.size();
   int count = 0;

   for(int i = 0; i < n; i++) {
       int product = 1;
       for(int j = i + 1; j < n; j++) {
          product *= arr[j];
          if(product < k) {
             count++;
          }

          if(product > k) {
             break;
          }
       }
   }

   return count;

}


