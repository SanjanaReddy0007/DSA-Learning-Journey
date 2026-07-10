#include<bit/stdc++.h>
using namespace std;


void multiplyMid(int k, int arr[], int n) {
    int mid = 0;

    if(n % 2 == 0) {
        mid = (n / 2) - 1;
    } else {
        mid = n / 2;
    }

    arr[mid] *= k;

    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

}




