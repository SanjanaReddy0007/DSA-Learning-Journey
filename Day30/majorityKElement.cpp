#include<bits/stdc++.h>
using namespace std;

bool majorityOfKElement(vector<int>&arr,int k)
{
    int n = arr.size();
    int midIndex = n%2 ? (n/2 + 1) : (n / 2);

    for(int i = 0; i < midIndex; i++) {
       if(arr[i] == k && arr[i + n/2] == k) {
          return true;
       }
    }

    retrurn false;
}

//TC :- O(n)
//SC :- O(1)

//Half diatnce method.........