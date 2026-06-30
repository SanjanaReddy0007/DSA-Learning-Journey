#include<bits/stdc++.h>
using namespace std;



void sortAdjacentDesc(int arr[],int n) {
    for(int i = n - 1; i >= 1; i--) {
        bool is_sorted = true;

        for(int j = 0; j < n - i; j++) {
            if(arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                is_sorted = false;
            }
        }

        if(is_sorted) break;
    }
}


//TC:- O(n)

