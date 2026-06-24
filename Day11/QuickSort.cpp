#include<bits/stdc++.h>
using namespace std



void Partition(int arr[],int low,int mid,int high) {
    int i = low;
    int j = high;

    while( i <= j) {
        while(arr[i] <= arr[low] && i <= high - 1) {
              i++;
        }

        while(arr[j] > arr[low] && j > 1) {
            j--;
        }

        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }


    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;

}




void QuickSortt(int arr[],int low,int high) {
    if(low < high) {
    Partition(arr,low,high);
    QuickSortt(arr,low,j - 1);
    QuickSortt(arr, j + 1, high);
  }
}


int QuickSort(int arr[],int n) {
    return QuickSortt(arr,0,n-1);
}


