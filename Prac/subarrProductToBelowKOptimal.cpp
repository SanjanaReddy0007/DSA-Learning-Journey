
int subarrProductToBelowK(vector<int>&arr , int k)
{
    int n = arr.size();
    int left = 0;
    int product = 1;

    for(int right = 0; right < n; right++) {
       product *= arr[right];

       while(product >= k) {
          product /= arr[left];
          left++;
       }

       count += rigth - left + 1;
    }

    return count;

}

