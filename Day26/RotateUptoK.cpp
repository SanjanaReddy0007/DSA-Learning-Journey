#include<bits/stdc++.h>
using namespace std;


//using temp arr
void RotateUptoK(int n,int arr[],int k) {
    int temp[k];
    for(int i = 0; i <= k-1; i++) {
        temp[i] = arr[i];
    }

   for(int i = k; i <= n-1; i++) {
    arr[i-k] = arr[i];
   }

   for(int i = n - k; i <= n-1; i++) {
    arr[i] = temp[i-(n - k)];
   }

} 


int main(){
    int n,k;
    cin>>n>>k;int arr[n];
    k = k % n;
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    RotateUpto(n,arr,k);
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}


//TC :- O(n) SC:- O(n)


// WITHOUT EXTRA ARRAYYYYY SMART TRICKKKKK


void RotateUtpoK(int n,int arr[],int k) {
    reverse(arr,arr+k); //upto k reverse arr
    reverse(arr+k,arr+n); //remaining elms reverses from right
    reverse(arr,arr+n); //whole reverse arr reverses now it will be correct order
}



//TC:- O(n) for all elms upto n
//SC :- O(1)



