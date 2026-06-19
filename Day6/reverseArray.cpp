#include<bits/stdc++.h>
using namespace std;


int reverseOfArray(int i,int arr[],int n) {
    if(i >= n/2) {
        return ;
    }

    swap(arr[i],arr[n - i - 1]);
    reverseOfArray(i + 1,arr,n);

}


int reverse(int n) {
    return reverseOfArray(0,arr,n);
}



//TC:- O(n)



