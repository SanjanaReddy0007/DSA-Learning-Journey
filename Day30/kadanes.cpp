#include<bits/stdc++.h>
using namespace std;


int kadanesSum(vector<int>&arr)
{
    int n = arr.size();
    int currSum = 0;
    int maxSum = INT_MIN;

    for(int i = 0; i < n; i++) {
        currSum += arr[i];
        maxSum = max(currSum, currSum);

        if(currSum < 0) currSum = 0;

    }
     
    return currSum;

}

//TC :- O(n)
//SC :- O(1)

