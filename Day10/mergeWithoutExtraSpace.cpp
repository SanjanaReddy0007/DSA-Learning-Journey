#include <bits/stdc++.h>
using namespace std;



void merge(int arr1[],int arr2[],int n,int m) {
   int left = n - 1, right = 0;

   while(left >= 0 && right < m) {
    if(arr1[left] > arr2[right]) {
        int temp = arr1[left];
        arr1[left] = arr2[right];
        arr2[right] = temp;
        left--;
        right++;
    }else{
        break;
    }
  }

  sort(arr1,arr1 + n);
  sort(arr2 , arr2 + m);

}






