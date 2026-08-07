#include<bits/stdc++.h>
using namespace std;

int maxSubarrToK(vector<int>&arr, int k)
{
    int n = arr.size();
    int product = 1;
    int count  = 1;

    int left = 0;
    for(int right = 0; right < n; right++) {
        product *= arr[right];

        while(product >= k) {
            product /= arr[left];
            left++;
        }

        count += right - left + 1;
    }

    return count;
}

//O(n) O(1)

