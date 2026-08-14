#include<bits/stdc++.h>
using namespace std;

int smallestsubarrWithMinLen(vector<int>&arr, int target)
{
    int n = arr.size();
    int start = 0, sum = 0;
    int minLen = INT_MAX;
    
    for(int end  = 0; end < n; end++) {
        sum += arr[end];

        while(sum >= target) {
             minLen = min(minLen, end - start + 1);
             sum -= arr[start++];
        }
    }

    return minLen == INT_MAX ? 0 : minLen;
}

//O(n)
//O(1)
