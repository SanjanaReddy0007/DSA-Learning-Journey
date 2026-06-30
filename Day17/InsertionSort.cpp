#include<bits/stdc++.h>
using namespace std;


void InsertionSort(int arr[],int n) {
    for(int i = 1; i <= n-1; i++) {
        int j = i;

        while(j >= 1 and (arr[j - 1] > arr[j])) {
             int temp = arr[j];
             arr[j] = arr[j - 1];
             arr[j - 1] = temp;
             j--;
        }

    }
}


//while inserting an element it keeps cehcks element from unsorted part and compares and selects and sort it




