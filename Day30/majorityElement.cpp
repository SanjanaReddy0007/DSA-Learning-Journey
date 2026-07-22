#include<bits/stdc++.h>
using namespace std;

//BRUTEEEEE

int majorityElement(vector<int>&arr)
{
 int n = arr.size();
 for(int i = 0; i < n; i++) {
    int count = 0;
    for(int j = i+1; j < n-1; j++) {
        if(arr[i] == arr[j]) {
            count++;
        }
    }

    if(count >  floor(n/2)) {
           return arr[i];
    }

  }

}

//TC :- O(n^2)
//SC :- O(1)

