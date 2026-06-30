#include<bits/stdc++.h>
using namespace std;


int partition(int arr[],int low,int high) {
    int i = low;
    int j = high;

    while(i < j) {
        while(arr[i] <= arr[low] && i <= high - 1){
            i++;
        }

       while(arr[j] > arr[low] && j >= 1) {
        j--;
       }

       if(i < j) {
        int temp = arr[i];
        arr[i] = arr[j]; //if i < j unitl it swap here only
        arr[j] = temp;
       }
    }

   int temp = arr[low] ;
   arr[low] = arr[j]; //once i crossed j then swap both..............
   arr[j] = temp;
   return j;

}


void QuickSort(int arr[],int low,int high) {
    if(low < high) {
        int j = partition(arr,low,high);
        QuickSort(arr,low,j-1);
        QuickSort(arr,j+1,high);
    }
}

//O(nlogn) best and avg case
//wordst :- O(n^2)

//SC:- O(1) addtional
//stack:- O(nlogn)




