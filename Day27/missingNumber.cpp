#include<bits/stdc++.h>
using namespace std;

int missingNumber(int n,int arr[]) {
    for(int i = 1; i <= n; i++) {
        int present = 0;
        for(int j = 0; j < n-1; j++) { //it sequentially checks i 123 ... to etc arr 
            if(i == arr[j]) {
                present = 1;
                break;
            }
        }

        if(present = 0) retrun i;
    }
}


int main() {
    int n;
    cin>>n;
    int arr[n - 1]; //bxs givn one missing num ex:- n=5 only given four nums so
    for(int i = 0; i < n=1; i++) {
        cin>>arr[i];
    }
    cout<<missingNumber(n,arr);
    return 0;
}


//TC :- O(n^2)
//SC :- O(1)


