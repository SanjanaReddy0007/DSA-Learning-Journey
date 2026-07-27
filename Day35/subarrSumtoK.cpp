#include<bits/stdc++.h>
using namespace std;


long long maxSubArrToK(vector<int>& arr, int k)
{
    int n = arr.size();
    int count = 0;

    for(int i = 0; i < n; i++) {
        long long product = 1;
        for(int j = i; j < n; j++) {
            product *= arr[i];

            if(product < k) count++;

            if(product >= k) {
                break;
            }
        }
    }

    return count;
}

//TC :- O(n^2)
//SC :- O(1)

