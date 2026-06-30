#include<bits/stdc++.h>
using namespace std;


void selectionSort(int arr[],int n) {
    int min_index;

   for(int i = 0; i <= n-2; i++) {
     min_index = i;
     for (int j=i; j <= n-1; j++) {
        if(arr[j] < arr[min_index]) {
            min_index = j;
        }
     }

     int temp = arr[i];
     arr[i] = arr[min_index];
     arr[min_index] = temp;
   }
}

//O(n^2) TC
// 3 steps *select min elemenent *swap it with first elemenent *reduce the range
//This is the inplace soting algorithm..............


