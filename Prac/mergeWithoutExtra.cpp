
void mergeAll(int arr1[] , int arr2[] , int n, int m)
{
   int left = 0, right = n - 1;
   while(left < m && right > n) {
        if(arr1[right] > arr2[left]) {
            int temp = arr1[right];
            arr1[right] = arr2[left];
            arr2[left] = temp;
            left++;
            right--;
        }
   }

   sort(arr1 , arr1 + n);
   sort(arr2 , arr2 + m);

}

