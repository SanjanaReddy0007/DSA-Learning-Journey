#include<bits/stdc++.h>
using namespace std;


int secondLargest(int n,int arr[]) {
   int secondLarge = -1;
   int largest = -1;
   for(int i = 0; i < n; i++) {
    if(arr[i] > largest) {
        secondLarge = largest;
        largest = arr[i];
    }
    else if(arr[i] > secondLarge && arr[i] < largest) {
        secondLarge = arr[i];
    }
   }

   return SecondLarge;
}


//TC :- O(n)

//BRUTE FORCE
//TC :- O(nlogn) + O(n)
int secondLargest(int n,int arr[]) {
    sort(arr,arr+n);
    int secondLarge = -1;
    for(int i = n - 2; i >= 0; i--) {
        if(arr[i] != arr[n - 1]) {
           secondLarge = arr[i];
        }
    }
    return secondLarge;
}





