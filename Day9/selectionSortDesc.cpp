#include <bits/stdc++.h>
using namespace std;

class solution {
    public:
    void selectionSort(int arr[], int n){
        //Write your code here...
        int max_index;
        for(int i = 0; i <= n-2; i++) {
            max_index = i;
            for(int j = i; j <= n - 1; j++) {
                if(arr[j] > arr[max_index]) {
                    max_index = j;
                }
            }
            
            int temp = arr[i];
            arr[i] = arr[max_index];
            arr[max_index] = temp;
            
        }
    }
};


