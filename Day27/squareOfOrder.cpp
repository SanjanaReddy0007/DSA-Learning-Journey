#include<bits/stdc++.h>
using namespace std;


vector<int>SquareOfOrderArr(vector<int>&arr) {
    vector<int>result;
    int n = arr.size();
    
    int left =0, right = arr.size() - 1;

    for(int i = n - 1; i >= 0; i--) {
        if(arr[left] > arr[right]) {
            result[i] = arr[left] * arr[left];
            left++;
        } else {
            result[i] = arr[right] * arr[right];
            right--;
        }
    }

    return result;

}


//TC:- O(n)
//SC :- O(1)


