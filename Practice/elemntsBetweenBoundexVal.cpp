#include<bits.stdc++.h>
using namespace std;

vector<int>ElementsBetwenBoundedValues(vector<int>&arr, int minBound, int maxBound) {
    int n = arr.size();
    int i = 0, j = 0;

    long long count = 0, preCount = 0;

    while(j < n) {
        if(arr[j] > maxBound) {
            preCount = 0;
            i = j + 1;
        } else if(arr[i] > minBound && arr[i] < maxBound) {
            preCount = j - i + 1;
        }

        count += preCount;
        j++;
    }

    return preCount;
}
