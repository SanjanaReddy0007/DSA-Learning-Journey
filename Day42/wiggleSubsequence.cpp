#include <bits/stdc++.h>
using namespace std;


int wigglesubsequence(vector<int>& arr)
{
    int n = arr.size();
    int increment = 1;
    int decrement = 1;

    for(int i = 1; i < n; i++) {
       if(arr[i] > arr[i - 1]) {
        increment = decrement + 1;
       } else {
        decrement = increment + 1;
       }
    }

    return max(increment,decrement);
}


//TC :- O(n)
//SC :- O(n)

