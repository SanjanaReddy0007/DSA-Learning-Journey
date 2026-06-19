#include<bits/stdc++.h>
using namespace std;


bool revserseImageArray(vector<int>&arr, int left,int right ) {
    if(left >= right) {
        return;
    }

    if(arr[left] != arr[right]) {
        return false;
    }

    revserseImageArray(arr,left + 1, right - 1);

}

bool reverseIt(vector<int>&arr,int n) {
    return revserseImageArray(arr,0,n - 1);
}


//TC :- O(n)


