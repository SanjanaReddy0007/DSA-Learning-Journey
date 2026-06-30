#include<bits/stdc++.h>
using namespace std;



void merge(int arr[],int left,int mid,int right) {
      int i = left;
      int j = mid + 1;
      int k = 0;
      int n = right - left + 1;
      int new_arr[n];

     while(i<=mid && j <= right) {
        if(arr[i] <= arr[j]) {
            new_arr[k] = arr[i];
            i++;
            k++;
        }else{
            j++;
            k++;
        }
     }



     while(i <= mid) {
          new_arr[k] = arr[i];
          i++;
          k++;
     }

   while(j <= right) {
     new_arr[k] = arr[j];
     j++;
     k++;
   }


   for(int c = 0; c <= n-1; c++) {
      arr[left + c] = new_arr[c];  
   }


}



void mergeSort(int arr[],int left,int right) {
    if(left == right) {
        return;
    }
    
    int mid = (left + right) / 2;
    mergeSort(arr,left,mid);
    mergeSort(arr,mid+1,right);
    merge(arr,left,mid,right);
}




