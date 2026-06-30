#include<bits/stdc++.h>
using namespace std;


void InsertionSortDesc(int arr[] , int n) {
    for(int i = 1; i <= n - 1; i++) {
        int j = i;

        while(j >= 1 && (arr[j - 1] < arr[j])) {
            int temp = arr[j - 1];
            ar[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}



//TC:- O(n^2) outer and inner loop runs for an ....... from left to right
// SC :- O(1) it is inplace so uses only few amount of space


