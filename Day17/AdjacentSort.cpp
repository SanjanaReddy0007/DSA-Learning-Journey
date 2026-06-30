#include<bits/stdc++.h>
using namespace std;


void AdjacentSort(int arr[],int n) {
    for(int i = n - 1; i >= 1; i--) {
        bool is_sorted = true;
        
        for(int j = i; j <= i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                is_sorted = false;
            }
        }

        if(is_sorted) break;
    }
}


//here seted as a flag for early exits by checking adjacent elements and if element is greater than previous so it will 
//makes as a O(n) of time complexity............... otherwise if not setted flag bool_sorted taes O(n^2) of TC



