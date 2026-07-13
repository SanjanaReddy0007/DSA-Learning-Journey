#include<bits/stdc++.h>
using namespace std;


//using an extra space i.e array to storein O(n) tc and O(n) space for vector to store

int zeroesToFront(int n,int arr[]) {
    
    vector<int>temp;
    int index = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            temp[index] = arr[i];
            index++;
        }
    }

    //zeroes add now to that
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            temp[index] = arr[i];
            index++;
        }
    }

    //copy back all to arrayyyyy
    for(int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

}



//WITHOUT USINGGGG AN EXTRA ARRAYYYYYY

int moveZeroesToEnd(int n,int arr[]) {
    int zeroes=0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            zeroes++;
        }
    }


   int writeindex = n - 1;
   for(int i = n - 1; i >= 0; i--) {
     if(arr[i] != 0) {
        arr[writeindex] = arr[i];
        writeindex--;
     }
   }


   for(int i = 0; i < zeroes; i++) {
      arr[i] = 0;
   }

}
//TC:- O(n)
//SC :- O(1) no xtra spaceeeeeeeeeeee



