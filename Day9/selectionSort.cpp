#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    void selectionSort(int arr[], int n){
        //Write your code here...
        int min_index;
        
        for(int i = 0; i <= n - 2; i++) {
            min_index = i;
            for(int j = i; j <= n - 1; j++) {
                if(arr[j] < arr[min_index]) {
                    min_index = j;
                }
            }
    
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
        
        }
    }
};



