#include<bits/stdc++.h>
using namespace std;


void countSwaps(int arr[] , int n) {
    int swaps = 0;

    for(int i = 1; i <= n - 1; i++) {
        int j = i;

        while(j >= 1 && (arr[j - 1] < arr[j])) {
            int temp = arr[j - 1];
            ar[j - 1] = arr[j];
            arr[j] = temp;
            swaps++;
            j--;
        }
    }

    return swaps;
}


//TC:-   O(n^2)



