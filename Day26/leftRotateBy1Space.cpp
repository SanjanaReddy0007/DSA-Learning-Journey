#include<bits/stdc++.h>
using namespace std;

void leftRotateByOnePlace(int n,int arr[]) {
    int temp = arr[0];
    for(int i = 0; i <= n - 1; i++) {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    leftRotateArrayOnePlace(n,arr);
    for(int i = 0; i < n; i++) {
        cout<<arr[i];
    }
    return 0;
}

//TC :- O(n)
//SC :- O(1)



