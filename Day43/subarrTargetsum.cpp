#include <bits/stdc++.h>
using namespace std;


int subarrTargetsum(vector<int>&arr, int k)
{
    int n = arr.size();
    int count = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int sum = 0;
            for(int k = i; k <= j; k++) {
                sum += arr[k];
            }

            if(sum == k) count++;
        }
    }

    return count;
}


//O(n^3) O(1)


//better O(n^2) O(1)
int subarrTargetsum(vector<int>&arr, int k)
{
    int n = arr.size();
    int count = 0;

    for(int i = 0; i < n; i++) {
        int sum = 0;

        for(int j = i; j < n; j++) {
           sum += arr[j];
           if(sum == k) count++;
        }
    }

    return count;
}





